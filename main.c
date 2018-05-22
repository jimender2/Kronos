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
void startup();
void help();

/* Commands */
void ping();
void addWifi(int);
void networkReset();
void newIP();
void createAccount();
void resetAccount();
void localAdmin(int);
void lookupAccount();
void installedPrograms();
void computerName();

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
		printf("4: \n");
		printf("5: \n");
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
			return;
		} else {
			return;
		}
	
	}
	
	return;

}

void networking() {
	clearScreen(30);
	logo();
	printf("0: Go to previous menu                    \n");
	printf("1: Network Reset                          \n");
	printf("2: Wifi Passwords                         \n");
	printf("3: Ping Google                            \n");
	printf("4: Ping 123                               \n");
	printf("5: New IP Address                         \n");
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
		networkReset();
	} else if (option == 2) {
		wifi();
	} else if (option == 3) {
		ping();
	} else if (option == 4) {
		ping();
	} else if (option == 5) {
		newIP();
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

void wifi() {
	
}

void ping() {
	system("ping www.google.com");
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

void localAdmin(int a) {
	clearScreen(30);
	if (a == 1) {
		printf("Enabling Local Admin Account");
	} else if (a == 2) {
		printf("Disabling Local Admin Account");
	} else {
		return;
	}
	printf("Done");	
	return;
}

void lookupAccount() {
	clearScreen(30);
	printf("Showing if account is created");
}

void installedPrograms() {
	clearScreen(30);
	printf("Showing all installed programs");
	system("Get-ItemProperty HKLM:\\Software\\Wow6432Node\\Microsoft\\Windows\\CurrentVersion\\Uninstall\\* | Select-Object DisplayName, DisplayVersion, Publisher, InstallDate | Format-Table –AutoSize");
	system("pause");
}

void computerName() {
	clearScreen(30);
	printf("Showing computername");
	system("hostname");
	system("pause");
}