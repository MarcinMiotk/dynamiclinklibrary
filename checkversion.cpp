// checkversion.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>
#include <iostream>

using namespace std;

// unsigned avcodec_version(void);
typedef UINT(CALLBACK* AvCodecVersion)(void);
// const char *avcodec_license(void); 
typedef char*(CALLBACK* AvLicense)(void);

int _tmain(int argc, _TCHAR* argv[])
{
	HMODULE dll = LoadLibrary(L"avcodec-55.dll");
	if (NULL != dll) {		

		// version
		{
			AvCodecVersion procedure = (AvCodecVersion)GetProcAddress(dll, "avcodec_version");
			if (NULL != procedure) {
				UINT response = procedure();
				cout << "Version : " << response << endl;
			}
			else {
				cout << "Procedure av version not found" << endl;
			}
		}

		// license
		{
			AvLicense procedure = (AvLicense)GetProcAddress(dll, "avcodec_license");
			if (NULL != procedure) {
				char* response = procedure();
				cout << "License : " << response << endl;
			}
			else {
				cout << "Procedure av licence not found" << endl;
			}
		}

		BOOL freeResponse = FreeLibrary(dll);
		if (freeResponse==0) {
			cout << "Error during library releasing";
		}
	}
	else {
		cout << "There is no DLL library" << endl;
	}
	return 0;
}

