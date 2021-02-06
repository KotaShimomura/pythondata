#include<stdio.h>
#define N 128
#include <stdlib.h>
#include <time.h>

int myRandom(int s, int e) {
		static int initFlag;
			if (initFlag == 0) {
						srand((unsigned int)time(NULL));
								initFlag = 1;
									}
				rand();
					return (s + (int)(rand()*(e - s + 1.0) / (1.0 + RAND_MAX)));
}

int main() {
		char name[N],moji;
			int i, a, b, c,work,or1,or2,or3,suuchi;
				printf("名前を入力：");
						scanf("%s", name);
								a = myRandom(20, 100);
										b = myRandom(20, 100);
												c = myRandom(20, 100);
														work = (a^b) ^ c;
																printf("a%d b%d c%d\n", a, b, c);
																		while (1) {
																						if ((work^a) < a) {
																											or1 = work^a;
																															a -= or1;
																																			printf("aから%d個取る。\n", or1);
																																							printf("a%d b%d c%d\n", a, b, c);
																																										}
																									else if ((work^b) < b) {
																														or2 = work^b;
																																		b -= or2;
																																						printf("bから%d個取る。\n", or2);
																																										printf("a%d b%d c%d\n", a, b, c);
																																													}
																												else if ((work^c) < c) {
																																	or3 = work^c;	
																																					c -= or3;
																																									printf("cから%d個取る。\n", or3);
																																													printf("a%d b%d c%d\n", a, b, c);
																																																}
																															else {
																																				--a;
																																								printf("a%d b%d c%d\n", a, b, c);
																																											}
																																		printf("%sの取る山名と個数を入力してください：",name);
																																					rewind(stdin);
																																								scanf("%c %d", &moji, &suuchi);
																																											if (moji == 'a') {
																																																a -= suuchi;
																																																				printf("a%d b%d c%d\n", a, b, c);
																																																							}
																																														else if (moji == 'b') {
																																																			b -= suuchi;
																																																							printf("a%d b%d c%d\n", a, b, c);
																																																										}
																																																	else if (moji == 'c') {
																																																						c -= suuchi;
																																																										printf("a%d b%d c%d\n", a, b, c);
																																																													}

																																																				if (a == 0 && b == 0 && c == 0) {
																																																									break;
																																																												}
																																																						}

																			return 0;
}
