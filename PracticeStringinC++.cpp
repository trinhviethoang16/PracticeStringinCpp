#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<cmath>
using namespace std;

//1. Nhap vao 1 chuoi ki tu. Xuat ra man hinh do dai cua chuoi do (khong su dung ham trong thu vien string.h)
int Length_String(char s[])
{
    //Cach 1:
    int i=0;
    while(true)
    {
        if(s[i]=='\0')
        {
            return i;
        }
        i++;
    }

    //Cach 2:
    for(int i=0; ; i++)
    {
        if(s[i]=='\0')
        {
            return i;
        }
    }

}

//2. Nhap vao 1 chuoi ki tu s1, sao chep chuoi s1 sang chuoi s2
void Copy_String(char s1[], char s2[])
{
    for(int i=0; i<strlen(s1); i++)
    {
        s2[i] = s1[i];
    }
    s2[strlen(s1)] = '\0';
}

//3. Nhap vao 1 chuoi ki tu. Xoa 1 ki tu tai vi tri bat ki va xuat ra chuoi sau khi xoa
void Delete_Char(char s[], int position)
{
    for(int i=position; i<strlen(s); i++)
    {
        s[i] = s[i+1];
    }
    s[strlen(s)-1] = '\0';
}

//4. Nhap vao 1 chuoi ki tu. Them 1 ki tu tai vi tri bat ki va xuat ra chuoi sau khi them
void Add_Char(char s[], int position, int kitu)
{
    for(int i=strlen(s)-1; i>=position; i--)
    {
        s[i+1] = s[i];
    }
    s[position] = kitu;
    s[strlen(s)+1] = '\0';
}

//5. Xay dung ham strlen() - tinh do dai chuoi (while-for)
int STRLEN(char s[])
{
    //while
    int i=0;
    while(true)
    {
        if(s[i]=='\0')
        {
            return i;
        }
        i++;
    }

    //for
    for(int i=0; ; i++)
    {
        if(s[i]=='\0')
        {
            return i;
        }
    }
}

//6. Xay dung ham strcpy() - sao chep chuoi
void STRCPY(char s1[], char s2[])
{
    for(int i=0; i<strlen(s1); i++)
    {
        s2[i] = s1[i];
    }
    s2[strlen(s1)] = '\0';

}

//7. Xay dung ham strdup() - sao chep chuoi (mang dong)
char *STRDUP(char s1[])
{
    char *s2 = new char[strlen(s1)+1];
    for(int i=0; i<strlen(s1); i++)
    {
        s2[i] = s1[i];
    }
    s2[strlen(s1)] = '\0';
    return s2;
    delete s2;
}

//8. Xay dung ham strlwr()-strupr() - chuoi in thuong - chuoi in hoa
void In_Thuong(char s[])
{
    for(int i=0; i<strlen(s); i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            s[i] = s[i]+32;
        }
    }
}

void In_Hoa(char s[])
{
    for(int i=0; i<strlen(s); i++)
    {
        if(s[i]>=97 && s[i]<=122)
        {
            s[i] = s[i]-32;
        }
    }
}

//9. Xay dung ham strrev() - dao nguoc chuoi
void Hoan_Vi(char &s1, char &s2)
{
    char temp = s1;
    s1 = s2;
    s2 = temp;
}

void Dao_Nguoc(char s[])
{
    int n = strlen(s);
    for(int i=0; i<(n/2); i++)
    {
        Hoan_Vi(s[i], s[n-i-1]);
    }
}

//10. Xay dung ham strcmp() -  so sanh 2 chuoi phan biet hoa thuong
int So_Sanh(char s1[], char s2[])
{
    int min = strlen(s1) < strlen(s2) ? strlen(s1): strlen(s2);
    for(int i=0; i<min; i++)
    {
        if(s1[i]>s2[i])
        {
            return 1;
        }
        else if(s1[i]<s2[i])
        {
            return -1;
        }
    }

    if(strlen(s1)>strlen(s2))
    {
        return 1;
    }
    else if(strlen(s1)<strlen(s2))
    {
        return -1;
    }
    return 0;
}
//11. Xay dung ham stricmp() -  so sanh 2 chuoi khong phan biet hoa thuong
int So_Sanh_Chuoi(char s1[], char s2[])
{
    int min = strlen(s1)<strlen(s2) ? strlen(s1) : strlen(s2);

    for(int i=0; i<min; i++)
    {
        if(s1[i]+32==s2[i])
        {
            continue;
        }
        if(s1[i]>s2[i])
        {
            return 1;
        }
        else if(s1[i]<s2[i])
        {
            return -1;
        }
    }
    if(strlen(s1)>strlen(s2))
    {
        return 1;
    }
    else if(strlen(s1)<strlen(s2))
    {
        return -1;
    }
    return 0;
}
//12. Nhap 1 chuoi ki tu tu ban phim. Bo het tat ca cac ki tu x(x la 1 ki tu thuong) vao chuoi temp va xuat ra man hinh.
void Tim_Kiem(char s[], char temp[], char x)
{
    int count=0;
    for(int i=0; i<strlen(s); i++)
    {
        if(s[i]==x)
        {
            temp[count] = x;
            count++;
        }
    }
    temp[count] = '\0';
    cout << "Chuoi temp chua cac ki tu x co trong chuoi s la: " << temp;
}
//13. Nhap 1 chuoi ki tu tu ban phim. Xuat ra man hinh chuoi vua nhap khong duoc ton tai ki tu khoang trang o dau chuoi va cuoi chuoi (neu co)

//Su dung lai ham xoa 1 ki tu trong chuoi ki tu
// void Delete_Char(char s[], int position)
// {
//     for(int i=position; i<strlen(s); i++)
//     {
//         s[i] = s[i+1];
//     }
//     s[strlen(s)-1] = '\0';
// }

void Khoang_Trang(char s[])
{
    int i=strlen(s);
    //Dau chuoi
    while(true)
    {
        if(s[0]==32)
        {
            Delete_Char(s, 0);
        }
        else
        {
            break;
        }
    }

    //Cuoi chuoi
    while(true)
    {
        if(s[i-1]==32)
        {
            Delete_Char(s, i-1);
        }
        else
        {
            break;
        }
    }
}

//14. Nhap vao 1 chuoi ki tu gom cac so. Xuat ra man hinh chuoi ki tu so do thanh cac so nguyen tinh toan duoc
//Quy tac 1: 123 = 1 * 10^2 + 2 * 10^1 + 3 * 10^0
//Quy tac 2: "123" = ("1"-48) * 10^2 + ("2"-48)*10^1 + ("3"-48)*10^0
//Chuyen chuoi so thanh mot so nguyen
int So_Nguyen(char s[])
{
    int sum=0;
    int mu=0;
    //Duyet cuoi chuoi den dau chuoi vi se khong can xac dinh so mu -> neu duyet nguoc lai se phai xac dinh so mu
    for(int i=strlen(s)-1; i>=0; i--)
    {
        sum += (s[i]-48) * pow(10,mu);
        mu++;
    }
    return sum;
}

int main()
{
    //Cau 1:
    // char s[30];
    // cout << "\nNhap chuoi ki tu: ";
    // gets(s);
    // cout << Length(s);


    //Cau 2:
    // char s1[30];
    // char s2[30];
    // cout << "\nNhap chuoi ki tu s1: ";
    // gets(s1);
    // Copy_String(s1, s2);
    // cout << "\nChuoi s2 sau khi sao chep tu s1: " << s2;

    //Cau3:
    // char s[30];
    // int position;
    // cout << "\nNhap vao 1 chuoi ki tu: ";
    // gets(s);
    // cout << "\nNhap vao vi tri ki tu muon xoa: ";
    // cin >> position;
    // Delete_Char(s, position);
    // cout << "\nChuoi sau khi xoa: " << s;

    //Cau 4:
    // char s[30];
    // cout << "\nNhap vao 1 chuoi ki tu: ";
    // gets(s);
    // Add_Char(s, 3, 't');
    // cout << "\nChuoi sau khi them: " << s;

    //Cau 5:
    // char s[30];
    // cout << "\nNhap chuoi ki tu: ";
    // gets(s);
    // cout << STRLEN(s);

    //Cau 6:
    // char s1[30];
    // char s2[30];
    // cout << "\nNhap chuoi ki tu s1: ";
    // gets(s1);
    // Copy_String(s1, s2);
    // cout << "\nChuoi s2 sau khi sao chep tu s1: " << s2;

    //Cau 7:
    // char s1[30];
    // cout << "\nNhap chuoi ki tu s1: ";
    // gets(s1);
    // char *s2 = STRDUP(s1);
    // cout << "\nChuoi s2 sau khi sao chep tu s1: " << s2;

    //Cau 8:
    //In thuong
    // char s1[30];
    // cout << "\nNhap chuoi ki  tu bat ki: ";
    // gets(s1);
    // In_Thuong(s1);
    // cout << "\nChuoi sau khi chuyen ve in thuong: " << s1;

    //In hoa
    // char s2[30];
    // cout << "\nNhap chuoi ki tu: ";
    // gets(s2);
    // In_Hoa(s2);
    // cout << "\nChuoi sau khi chuyen ve in hoa: " << s2;

    //Cau 9:
    // char s[30];
    // cout << "\nNhap chuoi ki tu bat ki: ";
    // gets(s);
    // Dao_Nguoc(s);
    // cout << "\nChuoi sau khi dao nguoc cac ki tu: " << s;

    //Cau 10:
    // char s1[] = "viet";
    // char s2[] = "viet hoang";
    // if(So_Sanh(s1, s2)>0)
    // {
    //     cout << "\nChuoi s1 lon hon chuoi s2 !";
    // }
    // else if(So_Sanh(s1, s2)<0)
    // {
    //     cout << "\nChuoi s1 nho hon chuoi s2 !";
    // }
    // else
    // {
    //     cout << "\nChuoi s1 bang chuoi s2 !";
    // }

    //Cau 11:
    // char s1[] = "VIET HOANG";
    // char s2[] = "viet hoang";
    // if(So_Sanh_Chuoi(s1, s2)>0)
    // {
    //     cout << "\nChuoi s1 lon hon chuoi s2 !";
    // }
    // else if(So_Sanh_Chuoi(s1, s2)<0)
    // {
    //     cout << "\nChuoi s1 nho hon chuoi s2 !";
    // }
    // else
    // {
    //     cout << "\nChuoi s1 bang chuoi s2 !";
    // }

    //Cau 12:
    // char s[30];
    // char temp[30];
    // cout << "\nNhap chuoi ki tu bat ki: ";
    // gets(s);
    // char x;
    // cout << "\nNhap ki tu x: ";
    // cin >> x;
    // Tim_Kiem(s, temp, x);

    //Cau 13:
    // char s[30];
    // cout << "\nNhap chuoi ki tu bat ki: ";
    // gets(s);
    // cout << "\nDo dai cua chuoi vua nhap: " << strlen(s);
    // Khoang_Trang(s);
    // cout << "\nChuoi sau khi xoa ki tu khoang trang o dau chuoi va cuoi chuoi: " << s << endl;
    // cout << "Do dai cua chuoi sau khi xoa: " << strlen(s);

    //Cau 14:
    // char s[30];
    // cout << "\nNhap chuoi ki tu so: ";
    // gets(s);
    // int number = So_Nguyen(s);
    // cout << "\nDay so nguyen sau khi chuyen doi: " << number;
    // cout << "\nKiem tra day so khi +123: " << number+123;

    return 0;
}