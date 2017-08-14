#include "module_1.h"
#include <time.h>
#include <stdlib.h>
#include <iostream>

int main() {
	srand(time(NULL));
	int flag_menu = 1;
	do {
		std::cout << "\n"<<"Vvedite nomer zada4i : 1-5, 0-vuhod" << "\n";
		std::cin >> flag_menu;
		if (flag_menu == 1) {
			int array_1[10] = { 1,2,3,4,5,6,7,8,9,10 };
			for (int i = 9; i>= 0 ; i--) {
				std::cout << "\n" << array_1[i];
			}
		}
	
		if (flag_menu == 2) {
			int array_2[5];
			int perimentr = 0;
			std::cout << "\n" << "Vvedite dlinu storon= " << "\n";
			for (int i = 0; i < 5; i++) {
				std::cin >> array_2[i];
				perimentr += array_2[i];
			}

			
			std::cout << "\n" << "Perimentr raven= " << perimentr;

		}
		if (flag_menu == 3) {
			std::cout << "\n" << "Vvedite koli4estvo mes9cov = ";
			int mes = 0;
			int pribl[12] = { 0 };
			int maks_mes = 0;
			int maks_pribl = 0;
			int min_pribl = 0;
			int min_mes = 0;
			long int summa = 0;
			double sr_summa = 0.0;
			std::cin >> mes;
			std::cout << "\n" << "Vvedite pribl za kahdi mes9c = ";
			for (int i = 0; i < mes; i++) {
				std::cout << "\n" << "za " << i + 1 << " mes9c =";
				std::cin >> pribl[i];
				summa += pribl[i];
				if (i == 0) {
					min_pribl = pribl[0];
				}
				if (maks_pribl <= pribl[i]) {
					maks_pribl = pribl[i];
					maks_mes = i+1;
				}
				if (pribl[i] <= min_pribl) {
					min_pribl = pribl[i];
					min_mes = i+1;
				}

			}
			sr_summa = summa / 12.0;
			std::cout << "\n" << "obha9 summa ravna = " << summa << "\n" << "sredn99 summa ravna = " << sr_summa;
			std::cout << "\n" << "maksimalna9 pribl bula v " << maks_mes << " mes9ce, a minimalna9 bula v " << min_mes << " mes9ce";

		}
		if (flag_menu == 4) {
			int array_3[10] = { 1,2,0,5,0,2,0,7,0,9 };
			for (int i = 0; i < 10; i++) {
				std::cout << " " << array_3[i];


			}
			for (int j = 0; j < 10; j++) {

				for (int i = 0; i < 9; i++) {
					if (array_3[i] == 0) {
						array_3[i] = array_3[i + 1];
						array_3[i + 1] = 0;
					}
				}
			}
			for (int i = 0; i < 10; i++) {
				if (array_3[i] == 0) {
					array_3[i] = -1;
				}
			}
			std::cout << "\n" << "Vivod = ";
			for (int i = 0; i < 10; i++) {
				std::cout << " " << array_3[i];


			}
		}




		if (flag_menu == 5) {
			int a[10] = { 0 };
			int b[2] = { 0 };
			int pos = 0;
			int dlina = 0;
			pos = 0;
			std::cout << "\n" << "Vvedite dlinu maasiva a= ";
			std::cin >> dlina;
			std::cout << "\n" <<"Vvedite znac massiva a=";
			for (int i = 0; i < dlina; i++) {
				std::cin >> a[i];
			}
			std::cout << "\n" << "Vvedite znac massiva b= ";
			for (int i = 0; i < 2; i++) {
				std::cin >> b[i];
			}
			for (int i = 0; i < dlina; i++) {
				if (b[0] == a[i] && b[1] == a[i + 1]) {
					pos = i;
					std::cout << "\n" << "Posicii podmnohestva =" << pos;
				}
				else if(pos==0 && i==dlina){
					pos = -1;
					std::cout << "\n" << pos;
				}
			}
		}
		if (flag_menu == 6) {
			std::cout << "UNITEST!!!!!!!!";
			long long int dlina = 5;
			long long int a[999999] = { 0 };
			
			for (long long int i = 0; i < dlina; i++) {
			a[i] = rand()+9;

			}
			
			long int b[] = { 0 };
			long long int d;
			long long int pos[999999] = { -1 };
			b[0] = 1;
			b[1] = 2;

			fun_test(dlina, a, b, pos);

			for (long long int i = 0; i < dlina; i++) {
				if (pos[i] != -1) {
					std::cout << " " << pos[i];
				}
			}


		}
	} while (flag_menu != 0);
}