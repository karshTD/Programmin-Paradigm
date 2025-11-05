% Medical Diagnostic System

% Symptoms and their associated diseases
symptom(fever, flu).
symptom(cough, flu).
symptom(headache, flu).
symptom(sore_throat, flu).
symptom(runny_nose, flu).

symptom(fever, malaria).
symptom(chills, malaria).
symptom(sweating, malaria).
symptom(headache, malaria).
symptom(nausea, malaria).

symptom(chest_pain, heart_disease).
symptom(shortness_of_breath, heart_disease).
symptom(fatigue, heart_disease).
symptom(dizziness, heart_disease).

symptom(abdominal_pain, appendicitis).
symptom(nausea, appendicitis).
symptom(vomiting, appendicitis).
symptom(fever, appendicitis).

symptom(joint_pain, arthritis).
symptom(swelling, arthritis).
symptom(stiffness, arthritis).

% Disease descriptions and recommendations
disease_info(flu, 
    'Influenza (Flu)',
    'Viral infection affecting respiratory system',
    'Rest, fluids, antiviral medication if early').

disease_info(malaria,
    'Malaria',
    'Parasitic disease transmitted through mosquito bites',
    'Antimalarial medication, rest, medical supervision').

disease_info(heart_disease,
    'Heart Disease',
    'Various conditions affecting the heart',
    'Immediate medical attention, lifestyle changes').

disease_info(appendicitis,
    'Appendicitis',
    'Inflammation of the appendix',
    'Emergency surgery required').

disease_info(arthritis,
    'Arthritis',
    'Inflammation of joints',
    'Anti-inflammatory medication, physical therapy').

% Diagnostic rules
has_disease(Patient, Disease) :-
    findall(Symptom, (symptom(Symptom, Disease), has_symptom(Patient, Symptom)), Symptoms),
    length(Symptoms, Count),
    count_symptoms(Disease, Total),
    Count >= Total * 0.6.  % At least 60% of symptoms present

count_symptoms(Disease, Count) :-
    findall(S, symptom(S, Disease), Symptoms),
    length(Symptoms, Count).

% Example patient data
has_symptom(patient1, fever).
has_symptom(patient1, cough).
has_symptom(patient1, headache).
has_symptom(patient1, runny_nose).

has_symptom(patient2, fever).
has_symptom(patient2, chills).
has_symptom(patient2, sweating).
has_symptom(patient2, headache).

has_symptom(patient3, chest_pain).
has_symptom(patient3, shortness_of_breath).
has_symptom(patient3, fatigue).

% Diagnostic query
diagnose(Patient) :-
    write('Diagnosis for '), write(Patient), write(':'), nl,
    (   has_disease(Patient, Disease),
        disease_info(Disease, Name, Description, Treatment),
        write('Possible Disease: '), write(Name), nl,
        write('Description: '), write(Description), nl,
        write('Recommended Treatment: '), write(Treatment), nl, nl,
        fail
    ;   true
    ).

% Example usage:
% ?- diagnose(patient1).
% ?- diagnose(patient2).
% ?- diagnose(patient3).
