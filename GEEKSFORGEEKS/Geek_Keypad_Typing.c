//GeeksForGeeks Problem : Keypad Typing (Basic)
//Author : By PIYUSH
#include<stdio.h>
#include<string.h>
int val(char);
int main()
{
	int t,i;
	char str[105];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",str);
		for(i=0;i<strlen(str);i++)
		{
			printf("%d",val(str[i]));
		}
		printf("\n");
	}
	return 0;
}
int val(char str)
{
	switch(str)
	{
		case 'a':
			case 'b':
				case 'c':
					return 2;
					break;
					case 'd':
						case 'e':
							case 'f':
								return 3;
								break;
								case 'g':
									case 'h':
										case 'i':
											return 4;
											break;
											case 'j':
												case 'k':
													case 'l':
														return 5;
														break;
														case 'm':
															case 'n':
																case 'o':
																	return 6;
																	break;
																	case 'p':
																		case 'q':
																			case 'r':
																				case 's':
																					return 7;
																					break;
																					case 't':
																						case 'u':
																							case 'v':
																								return 8;
																								break;
																								case 'w':
																									case 'x':
																										case 'y':
																											case 'z':
																												return 9;
																												break;
	}
}
