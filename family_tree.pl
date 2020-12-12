%facts%
female(charu).
female(pratibha).
female(mona).
female(kamla).
female(usha).
male(dinesh).
male(mathura_dutt).
male(bhavya).
male(devendra).
male(deep_Chandra).

parent_of(pratibha,charu).
parent_of(dinesh,charu).
parent_of(usha,pratibha ).
parent_of(deep_Chandra,pratibha).
parent_of(kamla,dinesh).
parent_of(mathura_dutt,dinesh).
parent_of(usha,mona).
parent_of(deep_Chandra,mona).
parent_of(mona,bhavya).
parent_of(devendra,bhavya).

/* Rules */
father_of(X,Y):- male(X),parent_of(X,Y).
mother_of(X,Y):- female(X),parent_of(X,Y).

grandfather_of(X,Y):- male(X),parent_of(X,Z),parent_of(Z,Y).

grandmother_of(X,Y):- female(X),parent_of(X,Z),parent_of(Z,Y).

sister_of(X,Y):- %(X,Y or Y,X)%
    female(X),father_of(F, Y), father_of(F,X),X \= Y.

sister_of(X,Y):- female(X),mother_of(M, Y), mother_of(M,X),X \= Y.

aunt_of(X,Y):- female(X),parent_of(Z,Y), sister_of(Z,X),!.

brother_of(X,Y):- %(X,Y or Y,X)%
    male(X),father_of(F, Y), father_of(F,X),X \= Y.

brother_of(X,Y):- male(X),mother_of(M, Y), mother_of(M,X),X \= Y.

uncle_of(X,Y):-parent_of(Z,Y), brother_of(Z,X).
