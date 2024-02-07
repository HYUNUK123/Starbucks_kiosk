#include <stdio.h>

int main()
{
	int Espresso_func(int);
	int Cold_Brew_func(int);
	int Frappuccino_func(int);
	int Blended_func(int);
	int Pizio_func(int);
	int Tea_func(int);
	int menu_func(int);
	int membership_func(int);

	int category;

	int Espresso_result = 0, Cold_Brew_result = 0, Frappuccino_result = 0, Blended_result = 0, Pizio_result = 0, Tea_result = 0;
	double result = 0, sales = 0, sales_Espresso = 0, sales_Cold_Brew = 0, sales_Frappuccino = 0, sales_Blended = 0, sales_Pizio = 0, sales_Tea = 0;
	double result_Espresso = 0, result_Cold_Brew = 0, result_Frappuccino = 0, result_Blendid = 0, result_Pizio = 0, result_Tea = 0, result_membership = 0;

	char Espresso[][100] = { "아메리카노","카페라떼","카푸치노","카라멜 마키아또","화이트 초콜릿 모카","카페모카" };
	char Cold_Brew[][100] = { "콜드 브루 오트라떼","돌체콜드브루","바닐라크림콜드브루","콜드브루","나이트로 바닐라크림","나이트로 콜드브루" };
	char Frappuccino[][100] = { "더블 에스프레소 칩 프라푸치노","제주 유기농 말차로 만든 크림 프라푸치노","자바 칩 프라푸치노","초콜릿 크림칩 프라푸치노","화이트 초콜릿 모카 프라푸치노","모카 프라푸치노" };
	char Blended[][100] = { "민트 초콜릿 칩 블렌디드","딸기 딜라이트 요거트 블렌디드","피치 & 레몬 블렌디드","망고 바나나 블렌디드","망고 패션 프루트 블렌디드" };
	char Pizio[][100] = { "쿨라임 피지오","블랙티 레모네이도 피지오","패션 탱고 티 레모네이드 피지오" };
	char Tea[][100] = { "뉴이어 시트러스 티","돌체 블랙 밀크티","유자 민트 티","패션 프루트 티","제주 유기농 말차로","만든 라떼" };

	while (1)
	{
		category = menu_func(1);  //카테고리 고르는 함수
		switch (category)
		{
		case 1:
			result_Espresso = Espresso_func(1); //에스프레소 고르는 함수
			result += result_Espresso; //result : 총 금액
			break;

		case 2:
			result_Cold_Brew = Cold_Brew_func(1); //콜드브루 고르는 함수
			result += result_Cold_Brew; //result : 총 금액
			break;

		case 3:
			result_Frappuccino = Frappuccino_func(1); //프라푸치노 고르는 함수
			result += result_Frappuccino; //result : 총 금액
			break;

		case 4:
			result_Blendid = Blended_func(1); //블렌디드 고르는 함수
			result += result_Blendid; //result : 총 금액
			break;

		case 5:
			result_Pizio = Pizio_func(1); //피지오 고르는 함수
			result += result_Pizio; //result : 총 금액
			break;

		case 6:
			result_Tea = Tea_func(1); //티 고르는 함수
			result += result_Tea; //result : 총 금액
			break;
		case 7:
			result_membership = membership_func(1); //멤버십 고르는 함수
			break;
		case 8:
			sales += result;
			sales_Espresso += result_Espresso;
			sales_Cold_Brew += result_Cold_Brew;
			sales_Frappuccino += result_Frappuccino;
			sales_Blended += result_Blendid;
			sales_Pizio += result_Pizio;
			sales_Tea += result_Tea;
			result = 0;
			result_Espresso = 0;
			result_Cold_Brew = 0;
			result_Frappuccino = 0;
			result_Blendid = 0;
			result_Pizio = 0;
			result_Tea = 0;
			printf("\n총 가격 : %.0f\n", sales); //결제 완료 및 총 매출 정산 계산
			printf("결제가 완료되었습니다.\n");
			printf("주문해주셔서 감사합니다.\n");
			break;
		case 9:   //일 매출 정산
			printf("에스프레소 매출 : %.0f\n", sales_Espresso);
			printf("콜드브루 매출   : %.0f\n", sales_Cold_Brew);
			printf("프라푸치노 매출 : %.0f\n", sales_Frappuccino);
			printf("블렌디드 매출   : %.0f\n", sales_Blended);
			printf("피지오 매출     : %.0f\n", sales_Pizio);
			printf("티 매출         : %.0f\n", sales_Tea);
			printf("총 매출         : %.0f\n\n", sales);
			break;
		case 0:  //종료
			printf("이용해주셔서 감사합니다.\n");
			return 0;
		}

		if (category == 7 && result_membership == 1) {  //멤버십 종류 별로 할인
			result = result * 0.95;
			result_Espresso = result_Espresso * 0.95;
			result_Cold_Brew = result_Cold_Brew * 0.95;
			result_Frappuccino = result_Frappuccino * 0.95;
			result_Blendid = result_Blendid * 0.95;
			result_Pizio = result_Pizio * 0.95;
			result_Tea = result_Tea * 0.95;
		}
		else if (category == 7 && result_membership == 2)
		{
			result = result * 0.9;
			result_Espresso = result_Espresso * 0.9;
			result_Cold_Brew = result_Cold_Brew * 0.9;
			result_Frappuccino = result_Frappuccino * 0.9;
			result_Blendid = result_Blendid * 0.9;
			result_Pizio = result_Pizio * 0.9;
			result_Tea = result_Tea * 0.9;
		}
		else if (category == 7 && result_membership == 3)
		{
			result = result * 0.85;
			result_Espresso = result_Espresso * 0.85;
			result_Cold_Brew = result_Cold_Brew * 0.85;
			result_Frappuccino = result_Frappuccino * 0.85;
			result_Blendid = result_Blendid * 0.85;
			result_Pizio = result_Pizio * 0.85;
			result_Tea = result_Tea * 0.85;
		}


		if (category == 8) {


		}

	}
	return 0;
}

int menu_func(int menu)  //카테고리 함수
{
	int category;
	printf("\n==========메뉴=============\n");
	printf("1.에스프레소\n");
	printf("2.콜드브루\n");
	printf("3.프라푸치노\n");
	printf("4.블렌디드\n");
	printf("5.피지오\n");
	printf("6.티\n");
	printf("7.멤버십 할인\n");
	printf("8.결제하기\n");
	printf("9.일 매출 정산\n");
	printf("0.종료\n");
	printf("===========================\n\n");

	printf("메뉴를 선택하세요: ");
	scanf_s("%d", &category);
	return category;  //카테고리 숫자 입력값 반환
}

int membership_func(int menu)  //멤버십 함수
{
	int membership;
	printf("\n==========멤버십==========\n");
	printf("1) Welcome\n");
	printf("2) Green\n");
	printf("3) Gold\n");
	printf("4) 뒤로가기\n");

	printf("멤버십을 선택하세요: ");
	scanf_s("%d", &membership);
	return membership; //멤버십 숫자 입력값 반환
}

int Espresso_func(int menu)  //에스프레소 함수
{
	char* Espresso[] = { "아메리카노","카페라떼","카푸치노","카라멜 마키아또","화이트 초콜릿 모카","카페모카" };
	int Espresso_price[][10] = { 4500, 4500, 5000, 5900, 5900, 5500 };
	int Espresso_result = 0;
	int jan = 0;

	printf("\n=====에스프레소 품목=====\n");
	printf("1) 아메리카노\n");
	printf("2) 카페라떼\n");
	printf("3) 카푸치노\n");
	printf("4) 카라멜 마키아또\n");
	printf("5) 화이트 초콜릿 모카\n");
	printf("6) 카페모카\n");
	printf("7) 뒤로가기\n");
	printf("=========================\n\n");

	while (menu >= 1)  //원하는 만큼 고를 때까지 계속 반복
	{
		printf("\n품목을 선택하세요: ");
		scanf_s("%d", &menu);
		if (menu == 7)
		{
			return Espresso_result;
		}
		printf("개수를 입력하세요: ");
		scanf_s("%d", &jan);
		if (menu == 1)
		{
			printf("%s %d잔 선택하셨습니다. \n", Espresso[0], jan);
			Espresso_result += Espresso_price[0][0] * jan;  //Espresso_result : 에스프레소 총 가격
		}
		else if (menu == 2)
		{
			printf("%s %d잔 선택하셨습니다. \n", Espresso[1], jan);
			Espresso_result += Espresso_price[0][1] * jan;
		}
		else if (menu == 3)
		{
			printf("%s %d잔 선택하셨습니다. \n", Espresso[2], jan);
			Espresso_result += Espresso_price[0][2] * jan;
		}
		else if (menu == 4)
		{
			printf("%s %d잔 선택하셨습니다. \n", Espresso[3], jan);
			Espresso_result += Espresso_price[0][3] * jan;
		}
		else if (menu == 5)
		{
			printf("%s %d잔 선택하셨습니다. \n", Espresso[4], jan);
			Espresso_result += Espresso_price[0][4] * jan;
		}
		else if (menu == 6)
		{
			printf("%s %d잔 선택하셨습니다. \n", Espresso[5], jan);
			Espresso_result += Espresso_price[0][5] * jan;
		}
		else if (menu == 7)
		{
			return Espresso_result;
		}
		printf("총 가격 : %d\n", Espresso_result);
	}
	return Espresso_result; //에스프레소 총 가격 반환
}

int Cold_Brew_func(int menu) //콜드브루 함수
{
	char* Cold_Brew[] = { "콜드 브루 오트라떼","돌체콜드브루","바닐라크림콜드브루","콜드브루","나이트로 바닐라크림","나이트로 콜드브루" };
	int Cold_Brew_price[][10] = { 5800, 6000, 5800, 4900, 6100, 6000 };
	int Cold_Brew_result = 0;
	int jan = 0;

	printf("\n=====콜드브루 품목=====\n");
	printf("1) 콜드 브루 오트라떼\n");
	printf("2) 돌체콜드브루\n");
	printf("3) 바닐라크림콜드브루\n");
	printf("4) 콜드브루\n");
	printf("5) 나이트로 바닐라크림\n");
	printf("6) 나이트로 콜드브루\n");
	printf("7) 뒤로가기\n");
	printf("=========================\n\n");

	while (menu >= 1) //원하는 만큼 고를 때까지 계속 반복
	{
		printf("\n품목을 선택하세요: ");
		scanf_s("%d", &menu);
		if (menu == 7)
		{
			return Cold_Brew_result;
		}
		printf("개수를 입력하세요 : ");
		scanf_s("%d", &jan);
		if (menu == 1)
		{
			printf("%s %d잔 선택하셨습니다. \n", Cold_Brew[0], jan);
			Cold_Brew_result += Cold_Brew_price[0][0] * jan;
		}
		else if (menu == 2)
		{
			printf("%s %d잔 선택하셨습니다. \n", Cold_Brew[1], jan);
			Cold_Brew_result += Cold_Brew_price[0][1] * jan;
		}
		else if (menu == 3)
		{
			printf("%s %d잔 선택하셨습니다. \n", Cold_Brew[2], jan);
			Cold_Brew_result += Cold_Brew_price[0][2] * jan;
		}
		else if (menu == 4)
		{
			printf("%s %d잔 선택하셨습니다. \n", Cold_Brew[3], jan);
			Cold_Brew_result += Cold_Brew_price[0][3] * jan;
		}
		else if (menu == 5)
		{
			printf("%s %d잔 선택하셨습니다. \n", Cold_Brew[4], jan);
			Cold_Brew_result += Cold_Brew_price[0][4] * jan;
		}
		else if (menu == 6)
		{
			printf("%s %d잔 선택하셨습니다. \n", Cold_Brew[5], jan);
			Cold_Brew_result += Cold_Brew_price[0][5] * jan;
		}
		printf("총 가격 : %d\n", Cold_Brew_result);
	}
	return Cold_Brew_result; //콜드브루 총 가격 반환
}

int Frappuccino_func(int menu) //프라푸치노 함수
{
	char* Frappuccino[] = { "더블 에스프레소 칩 프라푸치노","제주 유기농 말차로 만든 크림 프라푸치노","자바 칩 프라푸치노","초콜릿 크림칩 프라푸치노","화이트 초콜릿 모카 프라푸치노","모카 프라푸치노" };
	int Frappuccino_price[][10] = { 6300, 6300, 6300, 6000, 6000, 6000 };
	int Frappuccino_result = 0;
	int jan = 0;

	printf("\n=====프라푸치노 품목=====\n");
	printf("1) 더블 에스프레소 칩 프라푸치노\n");
	printf("2) 제주 유기농 말차로 만든 크림 프라푸치노\n");
	printf("3) 자바 칩 프라푸치노\n");
	printf("4) 초콜릿 크림칩 프라푸치노\n");
	printf("5) 화이트 초콜릿 모카 프라푸치노\n");
	printf("6) 모카 프라푸치노\n");
	printf("7) 뒤로가기\n");
	printf("=========================\n\n");

	while (menu >= 1) //원하는 만큼 고를 때까지 계속 반복
	{
		printf("\n품목을 선택하세요: ");
		scanf_s("%d", &menu);
		if (menu == 7)
		{
			return Frappuccino_result;
		}
		printf("개수를 입력하세요: ");
		scanf_s("%d", &jan);
		if (menu == 1)
		{
			printf("%s %d잔 선택하셨습니다. \n", Frappuccino[0], jan);
			Frappuccino_result += Frappuccino_price[0][0] * jan;
		}
		else if (menu == 2)
		{
			printf("%s %d잔 선택하셨습니다. \n", Frappuccino[1], jan);
			Frappuccino_result += Frappuccino_price[0][1] * jan;
		}
		else if (menu == 3)
		{
			printf("%s %d잔 선택하셨습니다. \n", Frappuccino[2], jan);
			Frappuccino_result += Frappuccino_price[0][2] * jan;
		}
		else if (menu == 4)
		{
			printf("%s %d잔 선택하셨습니다. \n", Frappuccino[3], jan);
			Frappuccino_result += Frappuccino_price[0][3] * jan;
		}
		else if (menu == 5)
		{
			printf("%s %d잔 선택하셨습니다. \n", Frappuccino[4], jan);
			Frappuccino_result += Frappuccino_price[0][4] * jan;
		}
		else if (menu == 6)
		{
			printf("%s %d잔 선택하셨습니다. \n", Frappuccino[5], jan);
			Frappuccino_result += Frappuccino_price[0][5] * jan;
		}
		printf("총 가격 : %d\n", Frappuccino_result);
	}
	return Frappuccino_result; //프라푸치노 총 가격 반환
}

int Blended_func(int menu) //블렌디드 함수
{
	char* Blended[] = { "민트 초콜릿 칩 블렌디드","딸기 딜라이트 요거트 블렌디드","피치 & 레몬 블렌디드","망고 바나나 블렌디드","망고 패션 프루트 블렌디드" };
	int Blended_price[][10] = { 6300, 6300, 6300, 6300, 5400 };
	int Blended_result = 0;
	int jan = 0;

	printf("\n======블렌디드 품목======\n");
	printf("1) 민트 초콜릿 칩 블렌디드\n");
	printf("2) 딸기 딜라이트 요거트 블렌디드\n");
	printf("3) 피치 & 레몬 블렌디드\n");
	printf("4) 망고 바나나 블렌디드\n");
	printf("5) 망고 패션 프루트 블렌디드\n");
	printf("7) 뒤로가기\n");
	printf("=========================\n\n");

	while (menu >= 1) //원하는 만큼 고를 때까지 계속 반복
	{
		printf("\n품목을 선택하세요: ");
		scanf_s("%d", &menu);
		if (menu == 7)
		{
			return Blended_result;
		}
		printf("개수를 입력하세요: ");
		scanf_s("%d", &jan);
		if (menu == 1)
		{
			printf("%s %d잔 선택하셨습니다. \n", Blended[0], jan);
			Blended_result += Blended_price[0][0] * jan;
		}
		else if (menu == 2)
		{
			printf("%s %d잔 선택하셨습니다. \n", Blended[1], jan);
			Blended_result += Blended_price[0][1] * jan;
		}
		else if (menu == 3)
		{
			printf("%s %d잔 선택하셨습니다. \n", Blended[2], jan);
			Blended_result += Blended_price[0][2] * jan;
		}
		else if (menu == 4)
		{
			printf("%s %d잔 선택하셨습니다. \n", Blended[3], jan);
			Blended_result += Blended_price[0][3] * jan;
		}
		else if (menu == 5)
		{
			printf("%s %d잔 선택하셨습니다. \n", Blended[4], jan);
			Blended_result += Blended_price[0][4] * jan;
		}
		printf("총 가격 : %d\n", Blended_result);
	}
	return Blended_result; //블렌디드 총 가격 반환
}

int Pizio_func(int menu) //피지오 함수
{
	char* Pizio[] = { "쿨라임 피지오","블랙티 레모네이도 피지오","패션 탱고 티 레모네이드 피지오" };
	int Pizio_price[][10] = { 5900, 5400, 5400 };
	int Pizio_result = 0;
	int jan = 0;

	printf("\n=====피지오 품목=====\n");
	printf("1) 쿨라임 피지오\n");
	printf("2) 블랙티 레모네이도 피지오\n");
	printf("3) 패션 탱고 티 레모네이드 피지오\n");
	printf("7) 뒤로가기\n");
	printf("=========================\n\n");

	while (menu >= 1) //원하는 만큼 고를 때까지 반복
	{
		printf("\n품목을 선택하세요: ");
		scanf_s("%d", &menu);
		if (menu == 7)
		{
			return Pizio_result;
		}
		printf("개수를 입력하세요: ");
		scanf_s("%d", &jan);
		if (menu == 1)
		{
			printf("%s %d잔 선택하셨습니다. \n", Pizio[0], jan);
			Pizio_result += Pizio_price[0][0] * jan;
		}
		else if (menu == 2)
		{
			printf("%s %d잔 선택하셨습니다. \n", Pizio[1], jan);
			Pizio_result += Pizio_price[0][1] * jan;
		}
		else if (menu == 3)
		{
			printf("%s %d잔 선택하셨습니다. \n", Pizio[2], jan);
			Pizio_result += Pizio_price[0][2] * jan;
		}
		printf("총 가격 : %d\n", Pizio_result);
	}
	return Pizio_result; //피지오 총 가격 반환
}

int Tea_func(int menu) //티 함수
{
	char* Tea[] = { "뉴이어 시트러스 티","돌체 블랙 밀크티","유자 민트 티","패션 프루트 티","제주 유기농 말차로","만든 라떼" };
	int Tea_price[][10] = { 6100, 5900, 5900, 5900, 6100, 6100 };
	int Tea_result = 0;
	int jan = 0;

	printf("\n=====티 품목=====\n");
	printf("1) 뉴이어 시트러스 티\n");
	printf("2) 돌체 블랙 밀크티\n");
	printf("3) 유자 민트 티\n");
	printf("4) 패션 프루트 티\n");
	printf("5) 제주 유기농 말차로\n");
	printf("6) 만든 라떼\n");
	printf("7) 뒤로가기\n");
	printf("=========================\n\n");

	while (menu >= 1) //원하는 만큼 고를 때까지 반복
	{
		printf("\n품목을 선택하세요: ");
		scanf_s("%d", &menu);
		if (menu == 7)
		{
			return Tea_result;
		}
		printf("개수를 입력하세요: ");
		scanf_s("%d", &jan);
		if (menu == 1)
		{
			printf("%s %d잔 선택하셨습니다. \n", Tea[0], jan);
			Tea_result += Tea_price[0][0] * jan;
		}
		else if (menu == 2)
		{
			printf("%s %d잔 선택하셨습니다. \n", Tea[1], jan);
			Tea_result += Tea_price[0][1] * jan;
		}
		else if (menu == 3)
		{
			printf("%s %d잔 선택하셨습니다. \n", Tea[2], jan);
			Tea_result += Tea_price[0][2] * jan;
		}
		else if (menu == 4)
		{
			printf("%s %d잔 선택하셨습니다. \n", Tea[3], jan);
			Tea_result += Tea_price[0][3] * jan;
		}
		else if (menu == 5)
		{
			printf("%s %d잔 선택하셨습니다. \n", Tea[4], jan);
			Tea_result += Tea_price[0][4] *jan;
		}
		else if (menu == 6)
		{
			printf("%s %d잔 선택하셨습니다. \n", Tea[5], jan);
			Tea_result += Tea_price[0][5] *jan;
		}
		printf("총 가격 : % d\n", Tea_result);
	}
	return Tea_result; //티 총 가격 반환
}

