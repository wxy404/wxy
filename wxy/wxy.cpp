// wxy.cpp : アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include <random>
#include <string>


int main()
{
	std::random_device rnd;//乱数
	
	std::string ur_name[9] = {"松浦果南UR","小原鞠莉UR","黒澤ダイヤUR","高海千歌UR","桜内梨子UR","渡辺曜UR","国木田花丸UR","津島善子UR","黒澤ルビィUR"};
	std::string ssr1_name[9] = { "松浦果南SSR+","小原鞠莉SSR+","黒澤ダイヤSSR+","高海千歌SSR+","桜内梨子SSR+","渡辺曜SSR+","国木田花丸SSR+","津島善子SSR+","黒澤ルビィSSR+" };
	std::string ssr_name[9] = { "松浦果南SSR","小原鞠莉SSR","黒澤ダイヤSSR","高海千歌SSR","桜内梨子SSR","渡辺曜SSR","国木田花丸SSR","津島善子SSR","黒澤ルビィSSR" };
	std::string sr1_name[9] = { "松浦果南SR+","小原鞠莉SR+","黒澤ダイヤSR+","高海千歌SR+","桜内梨子SR+","渡辺曜SR+","国木田花丸SR+","津島善子SR+","黒澤ルビィSR+" };
	std::string sr_name[9] = { "松浦果南SR","小原鞠莉SR","黒澤ダイヤSR","高海千歌SR","桜内梨子SR","渡辺曜SR","国木田花丸SR","津島善子SR","黒澤ルビィSR" };
	std::string r1_name[9] = { "松浦果南R+","小原鞠莉R+","黒澤ダイヤR+","高海千歌R+","桜内梨子R+","渡辺曜R+","国木田花丸R+","津島善子R+","黒澤ルビィR+" };
	std::string r_name[9] = { "松浦果南R","小原鞠莉R","黒澤ダイヤR","高海千歌R","桜内梨子R","渡辺曜R","国木田花丸R","津島善子R","黒澤ルビィR" };

	int ur = 0, ssr1 = 0, ssr = 0, sr1 = 0, sr = 0, r1 = 0, r = 0, n = 0;
	for (int flag = 0; flag == 0;) 
	{
		
		printf("第%d回のガチャ\n", n+1);
		for (int i = 0; i < 10; i++)
			{
				int num = (rnd() % 1000) + 1;
				int name_num = rand() % 9;
				//printf("Hello World\n");
				//printf("%d\n",num);
				if (i == 9)
				{
					num = (rnd() % 40) + 1;
				}
				if (num <= 10)
				{
					printf("%s\n", ur_name[name_num].c_str());
					ur++;
					flag++;
				}
				else if (num <= 10 + 30)
				{
					printf("%s\n", ssr1_name[name_num].c_str());
					ssr1++;
				}
				else if (num <= 10 + 30 + 50)
				{
					printf("%s\n", ssr_name[name_num].c_str());
					ssr++;
				}
				else if (num <= 10 + 30 + 50 + 100)
				{
					printf("%s\n", sr1_name[name_num].c_str());
					sr1++;
				}
				else if (num <= 10 + 30 + 50 + 100 + 150)
				{
					printf("%s\n", sr_name[name_num].c_str());
					sr++;
				}
				else if (num <= 10 + 30 + 50 + 100 + 150 + 200)
				{
					printf("%s\n", r1_name[name_num].c_str());
					r1++;
				}
				else
				{
					printf("%s\n", r_name[name_num].c_str());
					r++;
				}
				
			}
		
		printf("\n");
		n++;
	}
	printf("ガチャの回数は%d\n", n);
	printf("URの回数は%d\n", ur);
	printf("SSR+の回数は%d\n", ssr1);
	printf("SSRの回数は%d\n", ssr);
	printf("SR+の回数は%d\n", sr1);
	printf("SRの回数は%d\n", sr);
	printf("R+の回数は%d\n", r1);
	printf("Rの回数は%d\n", r);
    return 0;
}


void start()
{

}

