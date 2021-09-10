#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include <windows.h> 
#include <time.h>
#define N 11
#include <cstring>
#include <fstream>
#include <limits.h>
#include <conio.h>
#include <math.h>
#include<dos.h>
#define LIMITE_SUP 10000
#define LIMITE_INF 0
#define N_DIGITOS_ENTERO 4
#define DECENAS 2
#include <SFML/Graphics.hpp>
using namespace std;

{
		int op;
	while (op != 21)
	{
		cout << "\n";
		cout << "			Menu de Programas\n			"<< endl;
		cout << "  1) Calculadora"<< endl;
		cout << "  2) Determinacion de par o impar"<< endl;
		cout << "  3) Calculadora de conversiones"<< endl;
		cout << "  4) Determinacion de Palidromo"<< endl;
		cout << "  5) Conversion de Numeros Arabigos a Romanos"<< endl;
		cout << "  6) Conversor de numeros enteros a letras"<< endl;
		cout << "  7) Conversor de numeros enteros con decimales a letras"<< endl;
		cout << "  8) Tabla de Multiplicar"<< endl;
		cout << "  9) Tablas de Multiplicar"<< endl;
		cout << " 10) Multiplicacion Manual"<< endl;
		cout << " 11) Conversor de decimal a Binario" << endl;
		cout << " 12) Conversor decimal a hexadecimal" << endl; 
		cout << " 13) Creacion de Figura Geometrica Basica" << endl;
		cout << " 14) Punto en pantalla" << endl;
		cout << " 15) Simulador de Cajero Automatico" << endl;
		cout << " 16) Calculadora de Hipotenusa" << endl;
		cout << " 17) Determinacion de un factorial" << endl;
		cout << " 18) Calculadora de promedio de notas" << endl;
		cout << " 19) Determinacion de año bisiesto" << endl;
		cout << " 20) Juego Sorpresa"<< endl;
		cout << " 21) Salir"<< endl;
		cout << " SELECCIONAR UNA OPCION: ";
		cin >> op;
	
		switch (op)	
		{
		
			case 1:
				
				
				system ("cls");
				cout << "	BIENVENIDO A LA CALCULADORA\n"<< endl;
				
				int pos, n1, n2, resultado;
				cout << "1-. Suma"<< endl;
				cout << "2-. Resta"<< endl;
				cout << "3-. Multiplicacion"<< endl;
				cout << "4-. Division"<< endl;
				cout << "5-. Regresar al Menu Principal\n"<< endl;
				cout << "SELECCIONE UNA OPCION: ";
				cin>> pos;
				
				switch (pos) 
				{
					case 1:	
						cout << "Ingrese el primer termino: ";
						cin >> n1;
						cout << "Ingrese el segundo termino: ";
						cin >> n2;
						
						resultado = n1 + n2;
						cout << "\n";
						cout << "El Resultado es: "<< resultado<< endl;
						system ("Pause");
						system ("cls");
						break;
						
						
					case 2:
						cout << "\n	RESTA	"<< endl;
						cout << "INGRESE LOS TERMINOS QUE DESEA RESTAR "<< endl;
						cout << "Ingrese el primer termino: ";
						cin >> n1;
						cout << "Ingrese el segundo termino: ";
						cin >> n2;
						
						resultado = n1 - n2;
						cout << "\n";
						cout << "El Resultado es: "<< resultado<< endl;
						system ("Pause");
						system ("cls");
						break;
						case 3:
						cout << "\n	MULTIPLICACION	"<< endl;
						cout << "INGRESE LOS TERMINOS QUE DESEA MULTIPLICAR "<< endl;
						cout << "Ingrese el primer termino: ";
						cin >> n1;
						cout << "Ingrese el segundo termino: ";
						cin >> n2;
						
						resultado = n1 * n2;
						cout << "\n";
						cout << "El Resultado es: "<< resultado<< endl;
						system ("Pause");
						system ("cls");
						break;
						
					case 4:
						cout << "\n	DIVISION	"<< endl;
						cout << "INGRESE LOS TERMINOS QUE DESEA DIVIDIR "<< endl;
						cout << "Ingrese el primer termino: ";
						cin >> n1;
						cout << "Ingrese el segundo termino: ";
						cin >> n2;
						
						resultado = n1 / n2;
						cout << "\n";
						cout << "El Resultado es: "<< resultado<< endl;
						system ("Pause");
						system ("cls");	
						break;
						
					case 5:	
						system("pause");
						system ("cls");
						break;
								
				}
				break;
				
				
			case 2:
				{
					system ("cls");
					int n;
			
					cout << "	DETERMINACION SI UN NUMERO ES PAR O IMPAR \n"<< endl;
					cout << "Ingrese el numero que desea determinar: "<< endl;
					cin >> n;
					if (n==0) {
					cout << "EL NUMERO "<< n << " ES CERO. "<<endl;
					}
				
					if (n%2==0) {
					cout << "EL NUMERO "<< n << " ES PAR. "<< endl;
					}
					else {
					cout << "EL NUMERO "<< n << " NO ES PAR. "<< endl;	
					}
					cout << "*PRESIONE PARA REGRESAR AL MENU PRINCIPAL*"<< endl;
					system ("pause");
					system ("cls");
					break;
				}
				break;
			
			case 3:
				{
				
					system ("cls");
					
					cout << "	BIENVENIDO A LA DE CONVERSIONES\n"<< endl;
				
					int conv, km, millas, plg, kg, lb, m;
					
					cout << "1-. Kilometros a Millas"<< endl;
					cout << "2-. Metros a Pulgadas"<< endl;
					cout << "3-. Libras a Kilos"<< endl;
					cout << "4-. Millas a Kilometros"<< endl;
					cout << "5-. Pulgadas a Metros"<< endl;
					cout << "6-. Kilos a Libras"<< endl;
					cout << "7-. Regresar al Menu Principal\n"<< endl;
					cout << "SELECCIONE UNA OPCION: ";
					cin>> conv ;
				
					switch (conv) {
						case 1:	
							cout << "\n	KILOMETROS Y MILLAS 	"<< endl;
							cout << "INGRESE LOS KILOMETROS:  ";
							cin >> km;		
							millas = km * 0.621;
							cout << "\n";
							cout << km <<"Kilometros corresponden a "<< millas << " millas. "<< endl;
							system ("Pause");
							system ("cls");
							break;
						
						case 2:
							cout << "\n	METROS Y PULGADAS	"<< endl;
							cout << "INGRESE LOS METROS: ";
							cin >> m;
							plg = m * 39.3701;
							cout << "\n";
							cout<< m << "Metros corresponde a  "<< plg << " Pulgadas. "<< endl;
							system ("Pause");
							system ("cls");
							break;
						case 3:
							cout << "\n	LIBRAS A KILOS	"<< endl;
							cout << "INGRESE LAS LIBRAS: ";
							cin >> lb;
							kg = lb * 0.453592;
							cout << "\n";
							cout << lb << " Libras corresponde a "<< kg << " Kilos"<< endl;
							system ("Pause");
							system ("cls");
							break;
						case 4:
							cout << "\n	MILLAS A KILOMETROS	"<< endl;
							cout << "INGRESE LAS MILLAS: ";
							cin >> millas;
							km = millas / 0.621;
							cout << "\n";
							cout << millas << " millas corresponde a "<< km << " kilometros"<< endl;
							system ("Pause");
							system ("cls");
							break;
						case 5:
							cout << "\n	PULGADAS A METROS	"<< endl;
							cout << "INGRESE LAS PULGADAS: ";
							cin >> plg;
							m = plg / 39.3701;
							cout << "\n";
							cout<< m << "Pulgadas corresponde a  "<< plg << " Metros. "<< endl;
							system ("Pause");
							system ("cls");
							break;
						case 6:
							cout << "\n	KILOGRAMOS A LOBRAS	"<< endl;
							cout << "INGRESE LOS KILOGRAMOS: ";
							cin >> kg;
							lb = kg / 0.453592;
							cout << "\n";
							cout << kg << " Kilogramos corresponde a "<< lb << " Libras."<< endl;
							system ("Pause");
							system ("cls");
							break;
						
						case 7:
							system("pause");
							system ("cls");
							break;
										
							}
							break;
							
				}
				break;
			
			case 4:
				{
					system ("cls");
					cout << "\n DETERMINACION DE PALIDROMO"<<endl;
					int pal, cadena, copia;
					cout << "1-. Palabra"<< endl;
					cout << "2-. Numero"<< endl;
					cout << "3-. Regresar a menu principal"<< endl;
					cout << "SELECCIONE UNA OPCION: ";
					cin >> pal;
					
					switch (pal) 
					{
						case 1:
							{
							system ("cls");
							cout << "\n DETERMINACION SI UNA PALABRA ES PALIDROMA "<< endl;
							char cadena[100], copia[100];
							cout << "Ingrese la palabra: "<< endl;
							cin>>cadena;
							
							for ( int i=(strlen(cadena)-1);i>=0;i--){
								copia[strlen(cadena)-1-i]=cadena[i];
								}
								copia[strlen(cadena)]='\0';
								
							if(strcmp(cadena,copia)==0){
								cout<<"La palabra es palidroma\n";
							} else{
								cout <<"La palabra no es palidroma\n";
							}
							system ("Pause");
							system ("cls");
							break;	
							}
							break;
						case 2:
							{
							system ("cls");
							cout << "\n DETERMINACION SI UN NUMERO ES PALIDROMA  "<< endl;
							char cadena[100], copia[100];
							cout << "Ingrese el Numero: "<< endl;
							cin>>cadena;
							for ( int i=(strlen(cadena)-1);i>=0;i--){
								copia[strlen(cadena)-1-i]=cadena[i];
								}
								copia[strlen(cadena)] ='\0';
							if(strcmp(cadena,copia)==0){
								cout<<"El numer es palidroma\n";
							} else{
								cout <<"El numero no es palidroma\n";
							}
							system ("Pause");
							system ("cls");
							break;			
							}
							break;	
						case 3:
							{
							system("pause");
							system ("cls");
							break;
							}
	
					}
					break;
		
				}
				break;
			
			case 5:
				{
				system ("cls");
				
				int rem, numero, unidades, decenas, centenas, millar;
				
				cout <<"\n CONVERSOR DE NUMEROS ARABIGOS A ROMANOS"<< endl;
				cout <<"Digite numero arabigo: ";
				cin >> numero;
				
				unidades = numero%10; numero /= 10;
				decenas = numero%10; numero /= 10;
				centenas = numero%10; numero /= 10;
				millar = numero % 10; numero /= 10;
				
				cout << "\n El numero corresponde a:  "<<endl;
				
				switch (millar) {
				
					case 1: cout<<"M"; break;
					case 2: cout<<"MM"; break;
					case 3: cout<<"MMM"; break;
					}
				
				switch(centenas){
					case 1: cout<<"C";break;
					case 2: cout<<"CC";break;
					case 3: cout<<"CCC";break;
					case 4: cout<<"CD";break;
					case 5: cout<<"D";break;
					case 6: cout<<"DC";break;
					case 7: cout<<"DCC";break;
					case 8: cout<<"DCCC";break;
					case 9: cout<<"CM";break;
					}
				switch(decenas){
					case 1: cout<<"X";break;
					case 2: cout<<"XX";break;
					case 3: cout<<"XXX";break;
					case 4: cout<<"XL";break;
					case 5: cout<<"L";break;
					case 6: cout<<"LX";break;
					case 7: cout<<"LXX";break;
					case 8: cout<<"LXXX";break;
					case 9: cout<<"XC";break;
					}
				switch(unidades){
					case 1: cout<<"I";break;
					case 2: cout<<"II";break;
					case 3: cout<<"III";break;
					case 4: cout<<"IV";break;
					case 5: cout<<"V";break;
					case 6: cout<<"VI";break;
					case 7: cout<<"VII";break;
					case 8: cout<<"VIII";break;
					case 9: cout<<"IX";break;
					system ("Pause");
					system ("cls");
					break;
					}
				
				cout << " \n 1-. Regresar al menu principal"<< endl;
				cin>> rem;
				
				switch(rem){
					case 1:
						{
							system("pause");
							system ("cls");
							break;
							}		
				}
				break;
				
				}
				break; 
			
			case 6:
				{
					system ("cls");
					cout << "	BIENVENIDO A LA CONVERCION DE NUMEROS ENTEROS A LETRAS \n"<< endl;
					int rem, numero, unidades, decenas, centenas, millar;

					cout <<"Digite numero entero: ";
					cin >> numero;
					
					unidades = numero%10; numero /= 10;
					decenas = numero%10; numero /= 10;
					centenas = numero%10; numero /= 10;
					millar = numero % 10; numero /= 10;
					
					cout << "\n El numero corresponde a:  "<<endl;
					
					switch (millar) {
					
						case 1: cout<<"Mil"; break;
						case 2: cout<<"Dos mil "; break;
						case 3: cout<<"Tres mil"; break;
						case 4: cout<<"Cuatro mil "; break;
						case 5: cout<<"Cinco mil "; break;
						case 6: cout<<"Seis mil "; break;
						case 7: cout<<"Siente mil "; break;
						case 8: cout<<"Ocho mil "; break;
						case 9: cout<<"Nueve Mil "; break;
						}
					
					switch(centenas){
						case 1: cout<<"Ciento ";break;
						case 2: cout<<"Docientos ";break;
						case 3: cout<<"Trecientos ";break;
						case 4: cout<<"Cuatrocientos ";break;
						case 5: cout<<"Quinientos ";break;
						case 6: cout<<"Seiscientos ";break;
						case 7: cout<<"Setecientos ";break;
						case 8: cout<<"Ochocinetos ";break;
						case 9: cout<<"Novecientos ";break;
						}
					switch(decenas){
						case 1: cout<<"diesi";break;
						case 2: cout<<"veinte y ";break;
						case 3: cout<<"treinta y ";break;
						case 4: cout<<"cuarenta y ";break;
						case 5: cout<<"cincueta y ";break;
						case 6: cout<<"sesenta y ";break;
						case 7: cout<<"setenta y ";break;
						case 8: cout<<"Ochenta y";break;
						case 9: cout<<"Noventa y ";break;
						}
					switch(unidades){
						case 1: cout<<"uno";break;
						case 2: cout<<"dos";break;
						case 3: cout<<"tres";break;
						case 4: cout<<"cuatro";break;
						case 5: cout<<"cinco";break;
						case 6: cout<<"seis";break;
						case 7: cout<<"siente";break;
						case 8: cout<<"ocho";break;
						case 9: cout<<"nueve";break;
						system ("Pause");
						system ("cls");
						break;
						}
					
					cout << " \n 1-. Regresar al menu principal"<< endl;
					cin>> rem;
					
					switch(rem){
						case 1:
							{
								system("pause");
								system ("cls");
								break;
								}		
					}
					break;
					
					
				}
				break;
			case 7:
				{
					system ("cls");
					cout << "	BIENVENIDO A LA CONVERCION DE NUMEROS ENTEROS CON DECIMAL A LETRAS \n"<< endl;	
				
					{
					    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n'));
					    cin.get();
					}
					 
					int main(int argc, char* argv[])
				
					    char cadenas[4][11][15]={{"","mil ","dosmil ","tresmil ","cuatromil ","cincomil ","seismil ","sietemil ","ochomil ","nuevemil "},
					                             {"","cien ","doscientos ","trescientos ","cuatrocientos ","quinientos ","seiscientos ","setecientos ","ochocientos ","novecientos "},
					                             {"","diez ","veinte ","treinta ","cuarenta ","cincuenta ","sesenta ","setenta ","ochenta ","noventa "},
					                             {"cero","uno","dos","tres","cuatro","cinco","seis","siete","ocho","nueve"}};
					    char cadenaDecenas[9][15]={"once","doce","trece","catorce","quince","dieciseis","diecisiete","dieciocho","diecinueve"};
					 
					    int parteEntera,parteDecimal;
					    double num;
					 
				
					    do{
					        cout << "Introduce un numero (0 a 9999.99): ";
					        cin >> num;
					        if(num < LIMITE_INF || num >= LIMITE_SUP)
					            cout << "El numero introducido excede del rango valido. Vuelva a intentarlo." << endl;
					    }while(num < LIMITE_INF || num >= LIMITE_SUP);
					 
					    parteEntera = num;
					    parteDecimal = (num-parteEntera)*100;
					 
					    string salida;
					
					    int digitos[N_DIGITOS_ENTERO];
					    for(int i=N_DIGITOS_ENTERO-1; i>=0; i--,parteEntera /=10)
					        digitos[i]=parteEntera%10;

					    bool termina=false;
					    for(int i=0; i<N_DIGITOS_ENTERO && !termina; i++){
					        bool compuesta=false;
					        switch(digitos[i]){
					            case 0: 
					                if(i==N_DIGITOS_ENTERO-1){
					                    for(int j=0;j<N_DIGITOS_ENTERO;j++){ 
					                        if(digitos[j] != 0){
					                            compuesta=true;
					                            break;
					                        }
					                    }
					                    if(!compuesta) 
					                        salida += cadenas[i][digitos[i]];
					                }
					                break;
					            default: 
					                for(int j=i+1;j<N_DIGITOS_ENTERO;j++){ 
					                    if(digitos[j] != 0){
					                        compuesta=true;
					                        break;
					                    }
					                }
					                if(compuesta){ 
					                    if(digitos[i]==1 && i == CENTENAS){ 
					                        salida += "ciento ";
					                    }else if(i==DECENAS){ 
					                        switch(digitos[i]){
					                            case 1:
					                                salida += cadenaDecenas[digitos[i+1]-1];
					                                termina=true;
					                                break;
					                            case 2: 
					                                salida += "veinti";
					                                break;
					                        }
					                    }else{ 
					                        salida += cadenas[i][digitos[i]]; 
					                        if(i==DECENAS) 
					                            salida += "y ";
					                    }
					                }else{ 
					                    salida += cadenas[i][digitos[i]]; 
					                }
					        }
					 
					    }
					    
					    if(salida[salida.length()-1]!= ' ')
					        salida += " ";
					 
					    cout << salida << parteDecimal << "/100"<< endl;
					 
					    cout << "Pulsa intro para salir...";
					    pausar();
					    return 0;
						
					}
									}	
									break;
			case 8:
				{
					system ("cls");
					float i;
					int rem;
					cout << "Tabla de Multiplicar del numero 5 \n" << endl;
											
					for (i=0;i<=10;i++) {
						cout << "5" << "x" << i << "=" << (5*i) << endl;
					}
												
					cout << " \n 1-. Regresar al menu principal"<< endl;
					cin>> rem;
												
					switch(rem){
					case 1:
					{
						system("pause");
						system ("cls");
						break;
						}
						}
						break;	
						
				}
				break;
				
			case 9:
				{
				system ("cls");
					float i;
						int rem, numero;
						cout << "Ingrese el numero del que desea ver la Tabla de Multiplicar \n" << endl;
						cin >> numero;
						for (i=0;i<=10;i++) {
							cout << numero << "x" << i << "=" << (numero*i) << endl;
							}
							
						cout << " \n 1-. Regresar al menu principal"<< endl;
						cin>> rem;
							
						switch(rem){
								case 1:
									{
							system("pause");
							system ("cls");
							break;
							}
							}
							break;	
				
				}	
				break;
				
			case 10:
				{
					system ("cls");
					cout << "	BIENVENIDO A LA MULTIPLICACION MANUAL \n"<< endl;
					cout << "INGRESE LOS TERMINOS QUE DESEA MULTIPLICAR "<< endl;
						cout << "Ingrese el primer termino: ";
						cin >> n1;
						cout << "Ingrese el segundo termino: ";
						cin >> n2;
						
						resultado = n1 * n2;
						
						cout << "\n";
						cout << "El Resultado es: "<< resultado<< endl;
						system ("Pause");
						system ("cls");
						break;	
				}	
			case 11:
				{
					system ("cls");
					cout << "	BIENVENIDO A LA CONVERCION DE NUMEROS DECIMAL A BINARIOS \n"<< endl;
					int rem, decimal;
				    short binario[8];
				
				    cout << "Teclea el numero decimal que desea convertir:" << endl;
				    cin >> decimal;
				
				    for (int i = 0; i < 8; i++)
				    {
				        binario[i] = decimal % 2;
				        decimal /= 2;
				    }
				
				    cout << "El numero en binario es:" << endl;
				
				    for (int i = 7; i >= 0; i--)
				    {
				        cout << binario[i];
				    }
				    
					cout << " \n 1-. Regresar al menu principal"<< endl;
					cin>> rem;
					switch(rem){
					case 1:
						{
							system("pause");
							system ("cls");
							break;
							}
							}
							break;	
					
				}
				break;
					
			case 12:
				{
				system ("cls");
					cout << "	BIENVENIDO A LA CONVERCION DE NUMEROS DECIMAL A HEXADECIMAL \n"<< endl;
					int digitoex[20];
  					 int rem, decimal, residuo, resultado, i = 0;

				    cout << "Introduce el numero decimal a convertir: " << endl;
				    cin >> decimal;
				    do
				    	{
				        residuo = decimal % 16;
				        resultado = decimal / 16;
				        digitoex[i] = residuo;
				        decimal = resultado;
				        i++;
				    	} 	
					while (resultado > 15);
				    digitoex[i] = resultado;
				    cout << "El equivalente en hexadecimal es: ";
				    for (int j = i; j >= 0; j--)
					    {
					        if (digitoex[j] == 10)
					        {
					            cout << "A";
					        }
					        else if (digitoex[j] == 11)
					        {
					            cout << "B";
					        }
					        else if (digitoex[j] == 12)
					        {
					            cout << "C";
					        }
					        else if (digitoex[j] == 13)
					        {
					            cout << "D";
					        }
					        else if (digitoex[j] == 14)
					        {
					            cout << "E";
					        }
					        else if (digitoex[j] == 15)
					        {
					            cout << "F";
					        }
					        else
					        {
					            cout << digitoex[j];
					        }   
				    	}
				    	
				    cout << " \n 1-. Regresar al menu principal"<< endl;
					cin>> rem;
					switch(rem){
					case 1:
						{
							system("pause");
							system ("cls");
							break;
							}
							}
							break;		
				}
				break;
			case 13:
				{
					system ("cls");
					cout << "	BIENVENIDO A CREACION DE FIGURAS GEOMETRICAS \n"<< endl;
					int geo;
					cout << "1-. Circulo"<< endl;
					cout << "2-. Cuadrado"<< endl;
					cout << "3-. Triangulo"<< endl;
					cout << "5-. Regresar al Menu Principal\n"<< endl;
					cout << "SELECCIONE UNA OPCION: ";
					cin>> geo;
					
					switch (geo) 
					{
					
						case 1:	
						{
							cout << "CIRCULO "<< endl;
							{
								main()
								{
								clrscr();
								
								
								printf("\n");
								printf("          *******            1 \n");
								printf("      ***************        2 \n");
								printf("    *******************      3 \n");
								printf("  ***********************    4 \n");
								printf(" *************************   5 \n");
								printf("***************************  6 \n");
								printf("***************************  7 \n");
								printf("***************************  8 \n");
								printf("***************************  9 \n");
								printf(" *************************   10 \n");
								printf("  ***********************    11 \n");
								printf("    *******************      12 \n");
								printf("      ***************        13 \n");
								printf("          *******            14 \n");
								
								
								clrscr();      
								circulo();       
								getch();        
								}
								
								void circulo(){
								
								
								
								int x[20] = { 7 ,15 ,19 ,23 ,25 ,27 ,27 ,27 ,27 ,25 ,23 ,19 ,15 ,7 };
								int col[20] = { 11 ,7 ,5 ,3 ,2 ,1 ,1 ,1 ,1 ,2 ,3 ,5 ,7 ,11 };
								
								int i,j;
								
								int temp=0,fil=5;
								
								
								
									for(j=0 ; j<14 ; j++, temp++,fil++)
									{
									   for(i=0 ; i<x[temp] ; i++)
									   {
									       gotoxy(col[temp]+30,fil);printf("*");delay(20); 
									       col[temp]++;
									   }
									}
								}

							
							}	
							
						}
						
						case 2:	
						{
							cout << "CUADRADO "<< endl;
							{
								int n;
	
								printf("Especifica el tamanio del cuadrado: ");
								scanf("%i",&n);
								printf("\n");
								
								  	for(int r = 1; r <= n; r++)
								  	{
								  	  for(int l = 1 ; l <=n ; l++)
										{
											printf("*");
									    }
									    printf("\n");
									}
							}
						
						}
						case 3:	
						{
							cout << "TRIANGULO "<< endl;
							{
								int i;
								 const int num_lineas=8;
								 const char blanco=' ';
								 const char asterisco='*';
								 cout<<endl;
								for (int fila=1;fila<num_lineas;fila++){

								 for(int blancos=num_lineas-fila;blancos>0;blancos--)
								 cout<<blanco;
								 for (int cuenta_as=1;cuenta_as<2*fila;cuenta_as++)
								 cout<<asterisco;
								 cout<<endl;
							}
						}
						
						case 4:
						{
							system("pause");
							system ("cls");
							break;
							}
						}
							break;
							
						
					
				}
			}
			case 14:
				{
					system ("cls");
					cout << "	PUNTO EN PANTALLA \n"<< endl;
				sf::RenderWindow ventana(sf::VideoMode(800, 600), "Ventana de Dibujo");
				    int x = 1, y = 1;
				    int incremento_x = 5, incremento_y = 5;
				    int limite_izquierdo = 0, limite_derecho = 800;
				    int limite_superior = 0, limite_inferior = 600;
				
				    sf::CircleShape circulo1(10);
				    circulo1.setFillColor(sf::Color::Green);
				
				     while (ventana.isOpen())
				    {
				 
				        sf::Event evento;
				        while (ventana.pollEvent(evento))
				        {
				            if (evento.type == sf::Event::Closed)
				                ventana.close();
				        }
				
				        ventana.clear(sf::Color::Black);
				
				        if (x <= limite_izquierdo) 
				             incremento_x = abs(incremento_x);
				
				        if (x >= limite_derecho)
				            incremento_x =-incremento_x;
				
				        if (y <= limite_superior)
				            incremento_y = abs(incremento_y);
				
				        if (y >= limite_inferior)
				            incremento_y =- incremento_y;
				
				        x = x + incremento_x;
				        y = y + incremento_y;
				
				        circulo1.setPosition(x,y);
				
				        ventana.draw(circulo1);
				
				        ventana.display();
				
				    }
				
				    return 0;	
										
									
				}
				break;
			
			case 15:
				{
					system ("cls");
					cout << "	Cajero Automatico \n"<< endl;
					int saldo=10000;
					 int op, monto;
					 do{
					  printf ("Cajero automatico\n");
					  printf ("1- Consultar saldo inicial\n");
					  printf ("2- Retirar efectivo\n");
					  printf ("3- SALIR\n");
					  scanf ("%d", &op);
					  switch (op){
					   case 1:
					    printf ("Su saldo inicial es de:%d\n",saldo);
					    break;
					   case 2:
					    printf ("Ingrese monto a retirar\n");
					    scanf ("%d", &monto);
					    saldo=saldo-monto;
					    printf ("Su nuevo saldo es de:%d\n",saldo);
					    break;
					  }  
					 }
 						while (op!=3);
 						
 					cout << " \n 1-. Regresar al menu principal"<< endl;
					cin>> rem;
					switch(rem){
					case 1:
						{
							system("pause");
							system ("cls");
							break;
							}
							}
							break;	
	
				}
				break;
			
			case 16:
				{
					system ("cls");
					cout << "	BIENVENIDO A LA CALCULADORA DE HIPOTENUSA \n"<< endl;
					
					int c1,c2, h,rem;
					cout << "INGRESE CATETO 1: ";
					cin>>c1;
					cout << "INGRESE CATETO 2: ";
					cin>>c2;
					h=(c1*c1)+(c2*c2);
					cout << "LA HIPOTENUSA MIDE: "<<h;
					
					cout << " \n 1-. Regresar al menu principal"<< endl;
					cin>> rem;
					switch(rem){
					case 1:
						{
							system("pause");
							system ("cls");
							break;
							}
							}
							break;	
					
					
					
				}
			case 17:
				{
					system ("cls");
					cout << "	DETERMINACION DE UN FACTORIAL \n"<< endl;
					
					int num;
					 int fact=1;
					 printf ("Ingrese el numero\n");
					 scanf ("%d", &num);
					 if(num<0)
					  fact =0;
					    else if(num==0)
					  fact=1;
					    else{
					     for (int i = 1; i <= num; i++){
					         fact = fact*i;
					       }
					    }
					   printf ("%d", fact);
					return 0;
					cout << " \n 1-. Regresar al menu principal"<< endl;
					cin>> rem;
					switch(rem){
					case 1:
						{
							system("pause");
							system ("cls");
							break;
							}
							}
							break;	
					 
				}
				return;
			case 18:
				{
				system ("cls");
					cout << "	Calculadora de promedio de notas \n"<< endl;	
				
					
					{    
					    int i;
					    float nota;
					    float prome = 0;
					    for (i=1; i <= 5; i++)
					    {
					        printf("Ingrese la nota #%d del alumno\n",i);
					        scanf("%f",&nota);
					        prome += nota;
					    }
					    prome = prome/5;
					    printf("%.2f",prome);
					    if (prome < 60)
					        printf("REPROBADO\n");
					    else
					        printf("APROBADO\n");
					
					    return 0;
					}
					cout << " \n 1-. Regresar al menu principal"<< endl;
					cin>> rem;
					switch(rem){
					case 1:
						{
							system("pause");
							system ("cls");
							break;
							}
							}
							break;	
				}
				break;
				
			case 19:
				{
						system ("cls");
					cout <<  "DETERMINACION DE A. BISIESTO	 \n"<< endl;	
					int ano;

					cout << "Ingrese el Numero de Año" << endl;
					cin >> ano;
					if (ano%4==0) {
						if (ano%100==0) {
							if (ano%400==0) {
								cout << "El año " << ano << " NO es Bisiesto" << endl;
							}
						} else {
							cout << "El año " << ano << " Es Bisiesto" << endl;
						}
					} else {
						cout << " El año " << ano << " No Es Bisiesto" << endl;
					}
					return 0;
					cout << " \n 1-. Regresar al menu principal"<< endl;
					cin>> rem;
					switch(rem){
					case 1:
						{
							system("pause");
							system ("cls");
							break;
							}
							}
							break;	
				}
				break;
				
			case 20:
			{
				
				system ("cls");
					cout <<  "JUEGO SORPRESA	 \n"<< endl;
				
			void gotoxy(int x, int y);
				void menu();
				void jugadores();
				void registrar();
				void guardarDato();
				void elegir();
				void tablero();
				void turnos();
				void validarPosiciones();
				void ganador();
				int repetir(int n);
				int seguirJugando();
				void resultados();
				void presentacion();
				void salir();
				
				int main(){
					system("color 27");
					system("cls");
					while(10){
						system("cls");
						menu();
						system("cls");
						gotoxy(25,5);system("color E");
						cout<<"Digite una tecla para regresar a MENU PRINCIPAL....";
						getch();
					}
					return 0;
				}
				
				
				void gotoxy(int x, int y){
					HANDLE hcon;
					hcon = GetStdHandle(STD_OUTPUT_HANDLE);
					COORD dwPos;
					dwPos.X = x;
					dwPos.Y = y;
					SetConsoleCursorPosition(hcon,dwPos);
				}
				
				
				struct TresEnRaya{
					char nombre[20];
					int jugadas;
				};
				
				TresEnRaya jugar1;
				TresEnRaya jugar2;
				int tiro, empate, decidirlugar;
				char Random[9];
				char juego[3][3];
				char marcar;
				char compu[20]="PC";
				
				void menu(){
					gotoxy(30,2); cout<<"--------------------------";
					Beep(1500,500);
					system("color 70");
					gotoxy(35,3); cout<<" * BIENVENIDO * ";
					system("color 60");
					gotoxy(30,4); cout<<"--------------------------";
					Beep(1500,200);Beep(1500,200);
					
					for(int i=0; i<7; i++){
						system("color 6");
						gotoxy(18,8);cout<<" *** JUEGO TRES EN RAYA ***\n";
						system("color A");
					}
					int opcion;
					gotoxy(10,10);
					cout<<"1. Iniciar";
					gotoxy(10,11);
					cout<<"2. Presentacion";
					gotoxy(10,12);
					cout<<"3. Salir";
					gotoxy(18,15);
					cout<<"Ingrese la opcion a utilizar\n";
					gotoxy(18,16);cout<<" :: ";
					cin>>opcion;
				
					if(opcion==1 || opcion==2 || opcion==3){
						switch(opcion){
						case 1: jugadores(); break;
						
						case 2: presentacion();
						gotoxy(15,20);system("pause"); break;
						
						case 3: salir(); exit(0);
						}
					}
					else{
						opcion=0;
						system("color B"); 
						gotoxy(10,12);cout<<"Error !!! ... Opcion no valida\n";
					}
					getch();
				}
				
					
				void jugadores(){
					int opcion;
					system("cls");system("color 4");
					gotoxy(25,1); cout<<" * ElEGIR EL MODO DE JUEGO *";
					gotoxy(28,3); cout<<"1: Jugador Vs Jugador ";
					gotoxy(28,4); cout<<"2: jugador Vs Computadora";
					gotoxy(40,6);cout<<" :: ";
					cin>>opcion;
					if(opcion==1 || opcion ==2){
						switch(opcion){
						case 1:
							guardarDato();
							registrar();
							do{
								tablero();
								turnos();
							} while(seguirJugando());
							break;
						case 2:
							elegir();
							do{
								tablero();
								turnos();
							} while(seguirJugando());
							break;
						}
					}
					else{
						opcion=0;
						system("color 2"); 
						gotoxy(25,8);cout<<"Error !!. Opcion no valida";
					}
					getch();
				}
				
				
				void registrar(){
					int cantidad, cantidad2;
					do{
						gotoxy(10,13); cout<<"CANTIDAD MAXIMA DE CARACTERES DEBE SER 10 LETRAS";
						gotoxy(12,14); cout<<"* Jugador 1 *";
						gotoxy(12,15);cout<<"Ingrese su Nombre: ";
						gotoxy(15,16);cout<<" :: ";
						cin>>jugar1.nombre;
						cantidad = strlen(jugar1.nombre);
					} while(cantidad>10);
					gotoxy(17,7); cout<<jugar1.nombre;
					
					do{
						gotoxy(10,13); cout<<"CANTIDAD MAXIMA DE CARACTERES DEBE SER 10 LETRAS";
						system("color E");
						gotoxy(12,19);cout<<"* Jugador 2 *";
						gotoxy(12,20);cout<<"Ingrese su Nombre: ";
						gotoxy(15,21);cout<<" :: ";
						cin>>jugar2.nombre;
						cantidad2 = strlen(jugar2.nombre);
					} while(cantidad2>10);
					gotoxy(40,7); cout<<jugar2.nombre;
					getch();
				}
				void guardarDato(){
					system("cls");
					system("color B");
					gotoxy(10,3);cout<<"+-------------------------------------------+";
					gotoxy(10,4);cout<<"|     JUGADOR 1 (X)  |    JUGADOR 2 (0)     |";
					gotoxy(10,5);cout<<"+-------------------------------------------+";
					gotoxy(10,6);cout<<"|                    |                      |";
					gotoxy(10,7);cout<<"|                    |                      |";
					gotoxy(10,8);cout<<"|                    |                      |";
					gotoxy(10,9);cout<<"+-------------------------------------------+";
				}
				
					
				void elegir(){
					system("cls");
					int cantidad, opcion;
					gotoxy(10,2);
					cout<<"ELIJA EL TIPO DE JUGADOR"<<"\n\n 1: Jugador 1 = X  "<<"\n 2: Jugador 2 = 0\n :: ";
					cin>>opcion;
					switch(opcion){
						case 1: guardarDato();
						decidirlugar=2;
						strcpy(jugar2.nombre, compu);
						gotoxy(40,7); cout<<jugar2.nombre;
						gotoxy(7,17); cout<<"";
					
					do{
						gotoxy(10,17); cout<<"CANTIDAD MAXIMA DE CARACTERES DEBE SER 10 LETRAS";
						gotoxy(10,18); cout<<"Ingrese su nombre";
						gotoxy(15,19);cout<<" :: ";
						cin>>jugar1.nombre;
						cantidad = strlen(jugar1.nombre);
					}while(cantidad>10);
					gotoxy(17,7); cout<<jugar1.nombre;
					break;
					
					case 2: guardarDato();
						decidirlugar=1;
						strcpy(jugar1.nombre, compu);
						gotoxy(17,7); cout<<jugar1.nombre;
					
					do{
						gotoxy(10,17); cout<<"CANTIDAD MAXIMA DE CARACTERES DEBE SER 10 LETRAS";
						gotoxy(10,18); cout<<"Ingrese su nombre";
						gotoxy(15,19);cout<<" :: ";
						cin>>jugar2.nombre;
						cantidad = strlen(jugar1.nombre);
					} while(cantidad>10);
					gotoxy(40,7); cout<<jugar2.nombre;
					break;
					}
					getch();
				}
				
				void tablero(){
					system("cls");
					system("color D");
					gotoxy(25,1); cout<<" * JUEGO TRES EN RAYA * ";
					gotoxy(30,3); cout<<jugar1.nombre<<"   Vs  "<<jugar2.nombre;
					gotoxy(27,5); cout<<" EMPEZAR A JUGAR ";
					
					system("color 3");
					gotoxy(25,12); cout<<"     |     |     ";
					gotoxy(25,13); cout<<"     |     |     ";
					gotoxy(25,14); cout<<"     |     |     ";
					gotoxy(25,15); cout<<"------------------";
					gotoxy(25,16); cout<<"     |     |     ";
					gotoxy(25,17); cout<<"     |     |     ";
					gotoxy(25,18); cout<<"     |     |     ";
					gotoxy(25,19); cout<<"------------------";
					gotoxy(25,20); cout<<"     |     |     ";
					gotoxy(25,21); cout<<"     |     |     ";
					gotoxy(25,22); cout<<"     |     |     ";
				
					gotoxy(50,15); cout<<"     ************************";
					gotoxy(50,16); cout<<"     |   REINICIAR EL JUEGO  |";
					gotoxy(50,17); cout<<"     |     Digite Num. 10    |";
					gotoxy(50,18); cout<<"     *************************";
				}
				
				void turnos(){
				int h,i,j,n;
					tiro=0;
					marcar=0;
				
					for(j=0; j<=2; j++){
						for(h=0; h<3; h++){
							juego[j][h]=0;
						}
					}
					do{
						gotoxy(10,26); cout<<"Es el turno de  "<<jugar1.nombre;
						gotoxy(10,27); cout<<"Digite la posicion:  ";
						if(strcmp(jugar1.nombre, compu)==0){
							marcar='X';
							do{
								n=(rand()%9+1); 
							} while(repetir(n));
							for(i=0; i<9; i++){
								if(Random[i]==0){
									Random[i]=n;
									tiro = n;
									break;
								}
							}
							validarPosiciones();
						}
						else{
							cin>>tiro;
							if(tiro!=10){
								marcar='X';
								validarPosiciones();
							}
						}
						if(tiro!=10){
							system("color E");
							gotoxy(37,26); cout<<"|";gotoxy(37,27); cout<<"|";
							gotoxy(40,26); cout<<"Es el turno de "<<jugar2.nombre;
							gotoxy(40,27); cout<<"Digite la posicion:  ";
							if(strcmp(jugar2.nombre, compu)==0){
								marcar='0';
								do{
									n= (rand()%9+1);
								} while(repetir(n));
								for(int i=0; i<9; i++){
									if(Random[i]==0){
										Random[i]=n;
										tiro=n;
										break;
									}
								}
								validarPosiciones();
							}
							else{
								cin>>tiro;
								if(tiro!=10){
									marcar='0';
									validarPosiciones();
								}
							}
						}
					} while(tiro!=10);
					getch();
				}
				
				
				void validarPosiciones(){
					int x=0,y=0,c=27,d=13,i;
					
					if(tiro<=9){
						for(i=0; i<3; i++){  
							if(tiro==i+1){
								if(juego[i][0]=='0' || juego[i][0]=='X'){
									gotoxy(10,24); cout<<"Posicion esta ocupado, escoja otro: ";
								}
								else{
									juego[i][0] = marcar;
									gotoxy(c+(6*i),d); cout<<juego[i][0];
									gotoxy(10,25);cout<<" ";
									Random[i]=i+1;
								}
							}
						}
						
						for(i=3; i<6; i++){ 
							if(tiro==i+1){
								if(juego[x+(i-3)][y+1]=='0' || juego[x+(i-3)][y+1]=='X'){
									gotoxy(10,24); cout<<"Posicion esta ocupada, elija otro: ";
								}
								else{
									juego[x+(i-3)][y+1]= marcar;
									gotoxy(c+(6*(i-3)),d+4); cout<<juego[x+(i-3)][y+1];
									gotoxy(10,25);cout<<" ";
									Random[i]=i+1;
								}
							}
						}
						
						for(i=6; i<9; i++){ 
							if(tiro==i+1){
								if(juego[x+1][y+2]=='0' || juego[x+1][y+2]=='X'){
									gotoxy(10,24); cout<<"Posicion esta ocupada, elija otro:  ";
								}
								else{
									juego[x+(i-6)][y+2]= marcar;
									gotoxy(c+(6*(i-6)),d+8); cout<<juego[x+(i-6)][y+2];
									gotoxy(10,25);cout<<" ";
									Random[i]=i+1;
								}
							}
						}
						ganador();
					}else{
						gotoxy(20,9);cout<<"\a < Ingrese un numero entre [1-9] >";
					}
				}
				
				void ganador(){
					int x,y,punto;
					
					for(x=0; x<3; x++){
						if((juego[x][0]=='X') || juego[x][0]=='0'){
							if(juego[x][0]==juego[x][1] && juego[x][0]==juego[x][2]){
								if(juego[x][0]=='X'){
									punto=1;
								}
								if(juego[x][0]=='0'){
									punto=2;
								}
							}
						}
					}
					
					for(y=0; y<3; y++){
						if((juego[0][y]=='X') || (juego[0][y]=='0')){
							if(juego[0][y]==juego[1][y] && juego[0][y]==juego[2][y]){
								if(juego[0][y]=='X'){
									punto=1;
								}
								if(juego[0][y]=='0'){
									punto=2;
								}
							}
						}
					}
					
					if((juego[1][1]=='X') || juego[1][1]=='0'){
						if((juego[1][1]==juego[0][0] && juego[1][1]==juego[2][2])){
							if(juego[1][1]=='X'){
								punto=1;
							}
							if(juego[1][1]=='0'){
								punto=2;
							}
						}
						if((juego[1][1]==juego[2][0] && juego[1][1]==juego[0][2])){
							if(juego[1][1]=='X'){
								punto=1;
							}
							if(juego[1][1]=='0'){
								punto=2;
							}
						}
					}
					if( (juego[0][0] == 'X' || juego[0][0]=='0') &&
						(juego[1][0] == 'X' || juego[1][0]=='0') &&
						(juego[2][0] == 'X' || juego[2][0]=='0') &&
						(juego[0][1] == 'X' || juego[0][1]=='0') &&
						(juego[1][1] == 'X' || juego[1][1]=='0') &&
						(juego[2][1] == 'X' || juego[2][1]=='0') &&
						(juego[0][2] == 'X' || juego[0][2]=='0') &&
						(juego[1][2] == 'X' || juego[1][2]=='0') &&
						(juego[2][2] == 'X' || juego[2][2]=='0') &&
						(punto!=1 && punto!=2))
					{
						gotoxy(22,7);
						system("cls");
						system("color 3");
						gotoxy(23,9); cout<<"EMPATE :(  ";
						empate = empate+1;
						tiro=10;
					}
						if(punto==1 || punto==2){
							if(punto==1){
								gotoxy(22,7); 
								system("cls");
								jugar1.jugadas = jugar1.jugadas+1;
								gotoxy(23,9); 
								cout<<" FECLICIDADES  ";
								system("color 3"); cout<<jugar1.nombre;
								cout<<" HAS GANADO :) ";
								tiro = 10;
							}
							if(punto==2){
								gotoxy(22,9);
								system("cls");
								jugar2.jugadas = jugar2.jugadas+1;
								gotoxy(23,9); cout<<"FECLICIDADES  ";
								system("color 4"); cout<<jugar2.nombre;
								cout<<" HAS GANADO :) ";
								tiro = 10;
							}
						}
				}
				
					
				int repetir(int n){
					int i;
					srand(time(0));
					for(i=0; i<9; i++){
						if(Random[i]==n){
							return true;
						}
					}
					return false;
				}
				
					
				int seguirJugando(){
					int seguir;
					system("cls");
					resultados();
					gotoxy(25,10);system("color B");
					cout<<"QUIERES JUGAR DE NUEVO"<<endl;
					gotoxy(25,12);system("color A");
					cout<<"1:Si"<<endl;
					gotoxy(25,13);system("color A");
					cout<<"2:No"<<endl;
					gotoxy(35,15);cout<<" :: ";
					cin>>seguir;
					if(seguir==1){
						return true;
					}else if(seguir==2){
						jugar1.jugadas=0;
						jugar2.jugadas=0;
						empate=0;
						return false;
					}
					return false;
				}
				
					
				void resultados(){
					system("color B");
					gotoxy(10,1);cout<<"************************************************\n";
					gotoxy(10,2);cout<<"|               - RESULTADOS -                  |\n";
					gotoxy(10,3);cout<<"************************************************|\n";
					gotoxy(10,4);cout<<"|                                               |\n";
					gotoxy(10,5);cout<<"|                                               |\n";
					gotoxy(10,6);cout<<"|                                               |\n";
					gotoxy(10,7);cout<<"|                                               |\n";
					gotoxy(10,8);cout<<"************************************************|\n\n";
					gotoxy(15,5);
					cout<<":) "<<jugar1.nombre<<" Gano: "<<jugar1.jugadas;
					gotoxy(15,6);
					cout<<":) "<<jugar2.nombre<<" Gano: "<<jugar2.jugadas;
					gotoxy(15,7);
					cout<<":) Empates: "<<empate<<endl;
				}
				
				
				void presentacion(){
					system("cls");
					gotoxy(15,11); cout<<"+------------------------------------------------+\n";
					gotoxy(15,12); cout<<"|                                                |\n";
					gotoxy(15,13); cout<<"+------------------------------------------------+\n";
					gotoxy(15,14); cout<<"|                                                |\n";
					gotoxy(15,15); cout<<"|                                                |\n";
					gotoxy(15,16); cout<<"|                                                |\n";
					gotoxy(15,17); cout<<"|                                                |\n";
					gotoxy(15,18); cout<<"+------------------------------------------------+\n";
					gotoxy(25,12); cout<<"UNIVERSIDAD SAN FRANCISCO XAVIER";
					gotoxy(20,15); cout<<"ESTUDIANTE: ANARATA DIAZ MARIO";
					gotoxy(30,17); cout<<"SUCRE - BOLIVIA";
					
					
					int c;
					system("color C");
					gotoxy(1,2); printf("%c",201);
					gotoxy(1,3); printf("%c",186);
					gotoxy(1,4); printf("%c",186);
					gotoxy(1,5); printf("%c",186);
					gotoxy(1,6); printf("%c",186);
					gotoxy(1,7); printf("%c",200);
					for(c=2; c<=79; c++){
						gotoxy(c,2); printf("%c",205);
						gotoxy(c,7); printf("%c",205);
						Sleep(15);
					}
					gotoxy(80,2); printf("%c",187);
					gotoxy(80,3); printf("%c",186);
					gotoxy(80,4); printf("%c",186);
					gotoxy(80,5); printf("%c",186);
					gotoxy(80,6); printf("%c",186);
					gotoxy(80,7); printf("%c",188);
					
					
					char titulo[] = " * DESARROLLO DE JUEGO TRES EN RAYA * ";
					char titulo1[] = " C + + ";
					int longitud;
					longitud = strlen(titulo); 
					int centro = (((80-longitud)/2)+1);
					
					gotoxy(40,9); printf("%d",centro);
					for(c=2; c<=centro; c++){
						system("color D");
						system("color B");
						gotoxy(c,4); printf(titulo);
						system("color A");
						gotoxy(c+16,5); printf(titulo1);
						system("color E");
						gotoxy(40,10); printf("%d",c);
						Sleep(20);
					}
				}
					
				void salir(){
					system("cls");
					
					for(int i=0; i<3; i++){
						system("color A");
						gotoxy(5,1);
						cout<<"  ____  ____    ____    __  ____   ____  _____     __  __\n";
						gotoxy(5,2);
						cout<<" /    T|    \\  /    T  /  ]l    j /    T/ ___/    |  T|  T\n";
						gotoxy(5,3);
						cout<<"Y   __j|  D  )Y  o  | /  /  |  T Y  o  (   \\_     |  ||  |\n";
						gotoxy(5,4);
						cout<<"|  T  ||    / |     |/  /   |  | |     |\\__  T    |__j|__j\n";
						gotoxy(5,5);system("color F");
						cout<<"|  l_ ||    \\ |  _  /   \\_  |  | |  _  |/  \\ |     __  __  __\n";
						gotoxy(5,6);
						cout<<"|     ||  .  Y|  |  \\     | j  l |  |  |\\    |    |  T|  T|  T\n";
						gotoxy(5,7);system("color D");
						cout<<"l___,_jl__j\\_jl__j__j\\____j|____jl__j__j \\___j    l__jl__jl__j\n";
						gotoxy(21,9);system("color E");
						cout<<" *** Hasta pronto !!. *** ";
					}
					gotoxy(19,12);
					for(int i=1; i<=10; i++){
						cout<<" * ";
						Sleep(70);
					}
				}
			cout << " \n 1-. Regresar al menu principal"<< endl;
					cin>> rem;
					switch(rem){
					case 1:
						{
							system("pause");
							system ("cls");
							break;
							}
							}
							break;	
				
			}break;
				
			case 21:
				{
			
					return;
					
				}
						
				
										
							
					
		}
			
		
	}	
		
}
