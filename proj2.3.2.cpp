//https://github.com/YaDmitryE/D.Z.2.3

#include <stdio.h>

int main()
{
    long long int login, password;
    long long int user_login_1, user_login_2;
    long long int user_pass_1, user_pass_2;
    
	user_login_1 = 89051230000;
    user_pass_1 = 1234;
    user_login_2 = 89261230000;
    user_pass_2 = 4321;
    
    printf("Enter login: ");
    scanf ("%lli", &login);
    printf("Enter password:  ");
    scanf ("%lli", &password);
    
	if (((login == user_login_1) && (password == user_pass_1)) || ((login == user_login_2) && (password == user_pass_2))) {
        printf("Access OK");
    }
    else {
        printf("Access ERROR");
    }
    return 0;
}
