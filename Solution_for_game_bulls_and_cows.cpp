#include <iostream>
#include <cmath>

using namespace std;
bool situation3(int user1, int user2) {  //Situation 3 - Проверям корректность введенного числ, так чтобы не было одинаковых цифр в числе
    unsigned a1 = user1 % 10; // Для этого сначала считаем каждый разряд числа математическим путем                              
    unsigned a2 = user2 % 10;
    unsigned b1 = (user1 % 100) / 10;
    unsigned b2 = (user2 % 100) / 10;
    unsigned c1 = (user1 % 1000) / 100;
    unsigned c2 = (user2 % 1000) / 100;
    unsigned d1 = user1 / 1000;
    unsigned d2 = user2 / 1000;
    if ((a1 == b1) or (a1 == c1) or (a1 == d1) or (b1 == c1) or (b1 == d1) or (c1 == d1)
        or (a2 == b2) or (a2 == c2) or (a2 == d2) or (b2 == c2) or (b2 == d2) or (c2 == d2) ) {
        char str0[] = "Вводите числа с разными цифрами, для корректного результата";
        cout << str0;
        return str0;
    }
}
bool situation2(int user1, int user2) { // Situation 2 - Проверям количество одинаковых цифр в числе и возвращаем полученное значение
    unsigned a1 = user1 % 10;           // P.S Расчет данного количества не доработан в силу большого количества возможных условий для 2 и более совпадений в числах, Не судите строго :(((((
    unsigned a2 = user2 % 10;
    unsigned b1 = (user1 % 100) / 10;
    unsigned b2 = (user2 % 100) / 10;
    unsigned c1 = (user1 % 1000) / 100;
    unsigned c2 = (user2 % 1000) / 100;
    unsigned d1 = user1 / 1000;
    unsigned d2 = user2 / 1000;
    if (((a1 == b2) and (b1 == a2)) or ((a1 == b2) and (b1 == c2)) or ((a1 == b2) and (b1 == d2)) or ((a1 == b2) and (c1 == a2))
        or ((a1 == b2) and (c1 == d2)) or ((a1 == b2) and (d1 == a2)) or ((a1 == b2) and (d1 == c2)) or ((b1 == a2) and (a1 == c2))
        or ((b1 == a2) and (a1 == d2)) or ((b1 == a2) and (c1 == b2)) or ((b1 == a2) and (c1 == d2)) or ((b1 == a2) and (d1 == b2))
        or ((b1 == a2) and (d1 == c2)) or ((a1 == c2) and (b1 == a2)) or ((a1 == c2) and (b1 == d2))
        or ((a1 == c2) and (c1 == a2)) or ((a1 == c2) and (c1 == b2)) or ((a1 == c2) and (c1 == d2)) or ((a1 == c2) and (d1 == a2))
        or ((a1 == c2) and (d1 == b2))){
        char str4[8] = "2Коровы";
        cout << str4;
        return str4;
    }
    else if ((a1 == b2) or (a1 == c2) or (a1 == d2) or (b1 == a2)
        or (b1 == c2) or (b1 == d2) or (c1 == a2) or (c1 == b2)
        or (c1 == d2) or (d1 == a2) or (d1 == b2) or (d1 == c2)) {
        char str3[8] = "1Корова";
        cout << str3;
        return str3;
    }
}
bool situation1(int user1, int user2){ //Situation 1 - рассчет количества цифр в числе , которые равны и стоят на сответсвенных разрядах 
    unsigned a1 = user1 % 10;          // Были отброшены повторяющиеся варианты, и не рассматривалась ситуация 4 быка, так как это уже одинаковые числа
    unsigned a2 = user2 % 10;
    unsigned b1 = (user1 % 100) / 10;
    unsigned b2 = (user2 % 100) / 10;
    unsigned c1 = (user1 % 1000) / 100;
    unsigned c2 = (user2 % 1000) / 100;
    unsigned d1 = user1 / 1000;
    unsigned d2 = user2 / 1000;
    if ((a1 == a2) and (b1 == b2) and (c1 == c2) or ((a1 == a2) and (c1 == c2) and (d1 == d2)) 
        or ((a1 == a2) and (b1 == b2) and (d1 == d2)) 
        or ((b1 == b2) and (d1 == d2) and (c1 == c2))) {
        char str2[6] = "3Быка";
        cout << str2;
        return str2;
    }
    else if (((a1 == a2) and (b1 == b2)) or ((a1 == a2) and (c1 == c2)) 
        or ((a1 == a2) and (d1 == d2)) or ((b1 == b2) and (c1 == c2))
        or ((b1 == b2) and (d1 == d2)) or ((c1 == c2) and (d1 == d2))) {
        char str1[6] = "2Быка";
        cout << str1;
        return str1;
    }

     else if ((a1 == a2) or (b1 == b2) or (c1 == c2) or (d1 == d2)) {
        char str[5] = "1Бык";
        cout << str;
        return str;
    }
};
int main() // Не посредственно дополнительная проверка корректности  и подстановка различных сиутаций 
{
    
    setlocale(LC_ALL, "Russian");
    int user1;
    int user2;
    
    cout << "Добро пожаловать в игру быки  и коровы , прежде чем играть ознакомьтесь  правилами\n"
        << "1)Играют два человека, один загадывает другой отгадывает\n"
        << "2)Числа четырехзачные от 1000 - 9999 и цифры не повторяются , при попытке нарушить правила , игрок автоматически проигрывает\n"
        << "3)У вас пять попыток\n"<<"\n";
    
     for (unsigned i = 1; i <= 5; ++i) {
         cout << "Цикл" << " " << i << "\n";
         cout << "Пользователь 1, введите , пожалуйста , число:\n";
         cin >> user1;
         cout << "Пользователь 2, введите , пожалуйста , число:\n";        
         cin >> user2;
         if ((user1 < 1000) or user2 < 1000 or user1 > 9999 or user2 > 9999) {
             cout << "Некорректный ввод, введите четырехзначное число\n" ;
             return 1;
         }
         if ((situation3(user1, user2))) { // подстановка проверки числа на повторение его цифр 
             cout << "\n";
         }
         if (user1 == user2) {
             cout << "Число угадано, вы победили!\n" ;
   
          }
         else if (situation1(user1, user2)) {// подстновка расчета количества быков
             cout << "\n";
         }
         if (situation2(user1, user2)) {// подстновка расчета количества коров
             cout << "\n" <<"\n";
         }
     }
}


