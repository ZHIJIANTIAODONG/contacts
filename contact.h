#include <stdio.h>
#include <string.h>

#define MAX      1000
#define MAX_NAME 20
#define MAX_SEX  5
#define MAX_TELE 12
#define MAX_ADDR 30

enum Option
{
    EXIT,//0
    ADD,//1
    DEL,
    SEARCH,
    MODIFY,
    SHOW,
    SORT 
};

struct PeoInfo
{
    char name[MAX_NAME];
    int age;
    char sex[MAX_SEX];
    char tele[MAX_TELE];
    char addr[MAX_ADDR];
};

//通讯录类型
struct Contact
{
    struct PeoInfo data[MAX];
    int size;
};

//声明函数
void InitContact(struct Contact* ps);
void AddContact(struct Contact* ps);
void ShowContact(const struct Contact* ps);
void DelContact(struct Contact* ps);
void SearchCONTACT(const struct Contact* ps);
void ModifyContact(struct Contact* ps);