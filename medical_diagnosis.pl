 %this is a prolog code for medical diagnosis%

/* SYMPTOM */
symptom(ananya,breathlessness).
symptom(ananya,mucus).
symptom(ananya,chest_pain).
symptom(ananya,wheezing).
symptom(arkin,fever).
symptom(arkin,breathlessness).
symptom(arkin,cough).
symptom(arkin,cold).
symptom(arkin,loss_of_taste_and_smell).
symptom(nupur,chest_pain).
symptom(nupur,acidity).
symptom(nupur,sweating).
symptom(nupur,fainting).
symptom(poonam,chills).
symptom(poonam,burning_urine).
symptom(poonam,lower_abdomen_pain).

/* DISEASE */
disease(asthma,X):- symptom(X,breathlessness),symptom(X,mucus),symptom(X,chest_pain),symptom(X,wheezing).
disease(corona,X):- symptom(X,fever),symptom(X,breathlessness),symptom(X,cough),symptom(X,cold),symptom(X,loss_of_taste_and_smell).
disease(heart_attack,X):- symptom(X,chest_pain),symptom(X,acidity),symptom(X,sweating),symptom(X,fainting).
disease(urinary_infection,X):- symptom(X,chills),symptom(X,burning_urine),symptom(X,lower_abdomen_pain).
disease(malaria,X):- symptom(X,chills),symptom(X,headache),symptom(X,fatigue).

/* DIAGNOSIS PROCESS */
diagnosis_process(stethoscope,asthma).
diagnosis_process(ecg,heart_attack).
diagnosis_process(urine_test,urinary_infection).
diagnosis_process(blood_test,malaria).
diagnosis_process(blood_test,corona).

/* TREATMENT */
treatment(inhalor,asthma).
treatment(oxygen_pump,heart_attack).
treatment(antibiotic,urinary_infection).
treatment(chloroquin,malaria).
treatment(wear_masks,corona).
treatment(sanitizer,corona).

/* AVOID */
avoid(dust,ashtma).
avoid(smoking,asthma).
avoid(carpets,asthma).
avoid(pets,asthma).
avoid(mosquitoes,malaria).
avoid(surfaces,corona).
avoid(people,corona).

