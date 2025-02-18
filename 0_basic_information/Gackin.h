
// LostArk character class
class Char_info {
  public:
    static const int MAX_JOB_LENGTH = 15;      //직업 이름 최대 길이
    static const int MAX_identify_LENGTH = 30; //클래스 이름 최대 길이
    static const int MAX_NAME_LENGTH = 30;     //캐릭터 이름 최대 길이
    static const int MAX_CHAR_LENGTH = 24;     //캐릭터 최대 개수
    static const int MAX_SERVER_COUNT = 8;     //서버 최대 개수
    Char_info(char *user_name);

  private:
    int total_char;
    char job[MAX_JOB_LENGTH];                      //직업
    char identify[MAX_identify_LENGTH];            //클래스
    int total_char_count;                          //캐릭터 수
    char server[MAX_SERVER_COUNT][MAX_JOB_LENGTH]; //서버 이름
    char server_char_count[MAX_CHAR_LENGTH];       //서버 캐릭터 수
    char name[MAX_CHAR_LENGTH][MAX_NAME_LENGTH];   //이름
    char main_char[MAX_NAME_LENGTH];               //메인 캐릭터
    char itemlevel[MAX_NAME_LENGTH];               //아이템레벨
    int damage;                                    //공격력
    int hp;                                        //생명력
    int critical;                                  //치명
    int specialization;                            //특화
    int swiftness;                                 //신속
    int domination;                                //제압
    int endurance;                                 //인내
    int expertise;                                 //숙련
    char level[MAX_NAME_LENGTH];                   //레벨
    Gackin_info gackin;                            //각인정보
};

class Gackin_info {
  public:
    static const int MAX_NAME_LENGTH = 30; //각인 최대 개수
    int gackin_count = 0;                  //각인 개수
    int gackin_level;                      //각인 레벨 (최대 15)
    char gackin_name[8][MAX_NAME_LENGTH];  //각인 이름
};
class Gackin_cmp : Gackin_info {};

class Gungdangjang {
  public:
    static const int MAX_NAME_LENGTH = 20; //이름 최대값

  private:
    char name[MAX_NAME_LENGTH];       //이름
    char difficulty[MAX_NAME_LENGTH]; //난이도
};
