#include <cstdlib>
#include "BloodStorage.h"
#include "PatientQueue.h"

int main()
{
	 PatientQueue a;

	 a.addPatient();
	 a.addPatient();
	 a.addPatient();
	 a.addPatient();
	 a.deletePatient();
	 a.addPatient();
	 a.disp();

	system("pause");
	return 0;
}