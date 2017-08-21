class patients:
 patientlist =[]
 patientnumber = 1001
 patientroster=[]
 patientsymptoms =[]
 patientbed = 100
 patientmedical = "icd-10"
 
 def makenewpatient(patients):
  print('A for Patient Roster')
  print('B for Patient Symptoms')
  print('C for Patient Bed')
  print('D for Patient Medical')
  s = input('Enter The Patient Location Info--->')
  if s == 'A':
    print("Enter Patient Number")
  patients.patientlist.append(s)
  print(patients.patientlist)
  
  def patientlookup(patients):
   r = input("Enter the patient name for retrieval")
   
patients.makenewpatient(patients)
print(patients.patientlist)
print(patients.patientlist[0])