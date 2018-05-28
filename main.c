/*
 * main.c
 *
 *  Created on: May 20, 2018
 *      Author: Jonathan Meredith
 */

#include <stdio.h>
#include <stdlib.h>

/* Menus */
void logo();
void home();
void networking();
void userAccounts();
void domain();
void wifi();
void updates();
void remote();
void startup();
void help();

/* Commands */
void ping(int);
void addWifi(int);
void networkReset();
void newIP();
void createAccount();
void resetAccount();
void localAdmin(int);
void lookupAccount();
void installedPrograms();
void remotePS(int);
void computerName();
void updatesCSV();

/* Utility */
void clearScreen(int);


int main() {
	clearScreen(30);
	startup();
	home();
	return 0;
}

void logo() {
	printf("\n\n\n\n\n");
	printf("  K     K  RRRRR    OOOOOO    N        N    OOOOOO    SSSSS  \n");
	printf("  K    K   R    R  O      O   NN       N   O      O  S     S \n");
	printf("  K   K    R    R  O      O   N N      N   O      O  S       \n");
	printf("  K  K     R   R   O      O   N  N     N   O      O   S      \n");
	printf("  K K      RRRR    O      O   N   N    N   O      O    SSS   \n");
	printf("  K K      R  R    O      O   N    N   N   O      O       S  \n");
	printf("  K  K     R   R   O      O   N     N  N   O      O        S \n");
	printf("  K   K    R   R   O      O   N      N N   O      O        S \n");
	printf("  K    K   R   R   O      O   N       NN   O      O   S    S \n");
	printf("  K     K  R   R    OOOOOO    N        N    OOOOOO    SSSSS  \n");
	printf("\n\n\n\n\n");
	return;

}

void home() {
	int option;
	option = 10;
	while (option != 0) {
		clearScreen(30);
		logo();
		printf("0: Exit                                   \n");
		printf("1: Networking                             \n");
		printf("2: User Accounts                          \n");
		printf("3: Add to Domain                          \n");
		printf("4: Updates                                \n");
		printf("5: Remote Powershell                      \n");
		printf("6: \n");
		printf("7: \n");
		printf("8: \n");
		printf("9: Help                                   \n");
		printf("Please enter your selection: ");
		
		scanf( "%d", &option );
		
		if (option == 0) {
			break;
		} else if (option == 1) {
			networking();
		} else if (option == 2) {
			userAccounts();
		} else if (option == 3) {
			domain();
		} else if (option == 4) {
			updates();
		} else if (option == 5) {
			remote();
		} else if (option == 6) {
			installedPrograms();
		} else if (option == 7) {
			return;
		} else if (option == 8) {
			return;
		} else if (option == 9) {
			return;
		} else {
			return;
		}
	
	}
	
	return;

}

void remote() {
	int option;
	option = 10;
	while (option != 0) {

		clearScreen(30);
		logo();
		printf("0: Go to previous menu                    \n");
		printf("1: Enable Remote PS                       \n");
		printf("2: Disable Remote PS                      \n");
		printf("3: \n");
		printf("4: \n");
		printf("5: \n");
		printf("6: \n");
		printf("7: \n");
		printf("8: \n");
		printf("9: Help                                   \n");

		printf("Please enter your selection: ");

		scanf( "%d", &option );

		if (option == 0){
			return;
		} else if (option == 1) {
			remotePS(1);
		} else if (option == 2) {
			remotePS(2);
		} else if (option == 3) {
			return;
		} else if (option == 4) {
			return;
		} else if (option == 5) {
			return;
		} else if (option == 6) {
			return;
		} else if (option == 7) {
			return;
		} else if (option == 8) {
			return;
		} else if (option == 9) {
			help();
		} else {
			return;
		}

	}
	return;
}


void updates() {
	int option;
	option = 10;
	while (option != 0) {
	
		clearScreen(30);
		logo();
		printf("0: Go to previous menu                    \n");
		printf("1: List Updates                           \n");
		printf("2: \n");
		printf("3: \n");
		printf("4: \n");
		printf("5: \n");
		printf("6: \n");
		printf("7: \n");
		printf("8: \n");
		printf("9: Help                                   \n");

		printf("Please enter your selection: ");
		
		scanf( "%d", &option );
		
		if (option == 0){
			return;
		} else if (option == 1) {
			updatesCSV();
		} else if (option == 2) {
			return;
		} else if (option == 3) {
			return;
		} else if (option == 4) {
			return;
		} else if (option == 5) {
			return;
		} else if (option == 6) {
			return;
		} else if (option == 7) {
			return;
		} else if (option == 8) {
			return;
		} else if (option == 9) {
			help();
		} else {
			return;
		}

	}
	return;
}

void networking() {
	int option;
	option = 10;
	while (option != 0) {

		clearScreen(30);
		logo();
		printf("0: Go to previous menu                    \n");
		printf("1: Network Reset                          \n");
		printf("2: Wifi Passwords                         \n");
		printf("3: Ping Google                            \n");
		printf("4: Ping 121                               \n");
		printf("5: Ping 123                               \n");
		printf("6: New IP Address                         \n");
		printf("7: \n");
		printf("8: \n");
		printf("9: Help                                   \n");

		printf("Please enter your selection: ");

		scanf( "%d", &option );

		if (option == 0){
			return;
		} else if (option == 1) {
			networkReset();
		} else if (option == 2) {
			wifi(2);
		} else if (option == 3) {
			ping(1);
		} else if (option == 4) {
			ping(2);
		} else if (option == 5) {
			ping(3);
		} else if (option == 6) {
			newIP();
		} else if (option == 7) {
			return;
		} else if (option == 8) {
			return;
		} else if (option == 9) {
			help();
		} else {
			return;
		}
		
	}
	return;
}

void userAccounts() {
	clearScreen(30);
	logo();
	printf("0: Go to previous menu                    \n");
	printf("1: Create Account                         \n");
	printf("2: Reset Account Password                 \n");
	printf("3: Lookup User Account                    \n");
	printf("4: Unlock Local Administrator Account     \n");
	printf("5: Lock Local Administrator Account       \n");
	printf("6: \n");
	printf("7: \n");
	printf("8: \n");
	printf("9: Help                                   \n");

	printf("Please enter your selection: ");
	
	int option;
	scanf( "%d", &option );
	
	if (option == 0){
		return;
	} else if (option == 1) {
		createAccount();
	} else if (option == 2) {
		resetAccount();
	} else if (option == 3) {
		lookupAccount();
	} else if (option == 4) {
		localAdmin(1);
	} else if (option == 5) {
		localAdmin(2);
	} else if (option == 6) {
		return;
	} else if (option == 7) {
		return;
	} else if (option == 8) {
		return;
	} else if (option == 9) {
		help();
	} else {
		return;
	}
	
	return;
}

void domain() {

}

void wifi(int a) {
	if (a == 1) {
		system("netsh wlan set hostednetwork mode=allow ssid=”Testing” key=””");
	} else if (a == 2) {
		system("netsh wlan set hostednetwork mode=allow ssid=”iPad” key=”donottouch”");
	} else {
		return;
	}
	system("pause");
}

void ping(int a) {
	if (a == 1) {
		system("ping www.google.com");
	} else if (a == 2) {
		system("ping 10.22.0.121");
	} else if (a == 3) {
		system("ping 10.22.0.123");
	} else {
		return;
	}
	system("pause");
	return;
}

void clearScreen(int numberOfTimes) {
	int i;
	i = 0;
	while (i <= numberOfTimes) {
		printf("\n");
		i = i + 1;
	}
}

void startup() {
	logo();
	printf("This is an experimental script. Use at your own risk. \n");
    system("pause");
}

void help() {
	
}

void newIP() {
	clearScreen(30);
	printf("Releasing old IP and requesting new IP");
	system("ipconfig /renew");
	system("pause");
}

void remotePS(int a) {
	if (a == 1) {
		/*powershell*/
		system("powershell -Command \"&set-service winrm -startuptype automatic\"");
		system("powershell -Command \"&Enable-PSRemoting -Force\"");
	} else if (a == 2) {
		/*powershell*/
		system("powershell -Command \"&set-service winrm -startuptype Disabled\"");
		system("powershell -Command \"&Disable-PSRemoting -Force\"");
	} else if (a == 3) {
		system("ping 10.22.0.123");
	} else {
		return;
	}
	system("pause");
	return;
}

void networkReset() {
	
}

void createAccount() {
	clearScreen(30);
	printf("Creating Account");
}

void resetAccount() {
	clearScreen(30);
	printf("Resetting account");
}

void updatesCSV() {
	clearScreen(30);
	/*powershell*/
	/*$Session = New-Object -ComObject "Microsoft.Update.Session";$Searcher = $Session.CreateUpdateSearcher();$historyCount = $Searcher.GetTotalHistoryCount();$Searcher.QueryHistory(0, $historyCount) | Select-Object Date,@{name="Operation"; expression={switch($_.operation){1 {"Installation"}; 2 {"Uninstallation"}; 3 {"Other"}}}}, @{name="Status"; expression={switch($_.resultcode){1 {"In Progress"}; 2 {"Succeeded"}; 3 {"Succeeded With Errors"};4 {"Failed"}; 5 {"Aborted"} }}}, Title, Description | Export-Csv "$Env:userprofile\Desktop\Windows Updates.csv"*/
	system("powershell -Command \"& $Session = New-Object -ComObject \"Microsoft.Update.Session\";$Searcher = $Session.CreateUpdateSearcher();$historyCount = $Searcher.GetTotalHistoryCount();$Searcher.QueryHistory(0, $historyCount) | Select-Object Date,@{name=\"Operation\"; expression={switch($_.operation){1 {\"Installation\"}; 2 {\"Uninstallation\"}; 3 {\"Other\"}}}}, @{name=\"Status\"; expression={switch($_.resultcode){1 {\"In Progress\"}; 2 {\"Succeeded\"}; 3 {\"Succeeded With Errors\"};4 {\"Failed\"}; 5 {\"Aborted\"} }}}, Title, Description | Export-Csv \"Windows Updates.csv\"\"");
	printf("Check Desktop for the csv file");
	printf("Done");
	system("pause");
	return;
}

void localAdmin(int a) {
	clearScreen(30);
	if (a == 1) {
		printf("Enabling Local Admin Account");
		system("net user administrator /active:yes");
	} else if (a == 2) {
		printf("Disabling Local Admin Account");
		system("net user administrator /active:no");
	} else {
		return;
	}
	printf("Done");	
	system("pause");
	return;
}

void lookupAccount() {
	clearScreen(30);
	printf("Showing if account is created");
}

void installedPrograms() {
	clearScreen(30);
	printf("Showing all installed programs");
	printf("\n");
	system("powershell -Command \"&Get-ItemProperty HKLM:\\Software\\Wow6432Node\\Microsoft\\Windows\\CurrentVersion\\Uninstall\\* | Select-Object DisplayName, DisplayVersion, Publisher, InstallDate | Format-Table –AutoSize >installedPrograms.txt\"");
	system("pause");
}

void computerName() {
	clearScreen(30);
	printf("Showing computername");
	system("hostname");
	system("pause");
}
