#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int dish_code;
    int quantity;
    int course;
    int bill=0;
    int cost=0;

    fstream file;
    file.open("Menu.txt", ios::app);
    if (!file.is_open()){
        cout << "File opening Failed!"<< endl;
    }
        else{
        file << "Your Order and BILL :" <<endl;

        do {
            cout << "Enter Your Order:" <<endl;
            cout << "Select your course:" <<endl;
            cin>>course;

            if (course==100){
                    cout << "Welcome to Roti section:" <<endl;
                    cout << "Enter your dish code:" <<endl;
                    cin >> dish_code;
                    cout << "Enter quantity:" <<endl;
                    cin >> quantity;
                if (dish_code==1){
                    cost = quantity*25;
                        file << "Plain Nan"<< " " << cost<<endl;
                    } else if(dish_code==2){
                    cost = quantity*30;
                    file << "Butter Nan" <<" "<< cost<<endl;
                    }
                else if(dish_code==3) {
                    cost = quantity*40;
                    file << "Rumaali Roti" << " "<<cost<<endl;
                    }
                    else if(dish_code==4) {
                    cost = quantity*35;
                    file << "Paratha" << ""<<cost<<endl;
                    }
                bill+=cost;
            }
            else if(course==200) {
                    cout << "Welcome to Chinese section:" << endl;
                    cout << "Enter your dish code:" << endl;
                    cin >> dish_code;
                    cout << "Enter quantity:" << endl;
                    cin >> quantity;
                    if (dish_code == 5) {
                        cost = quantity*160;
                        file << "Veg Chowmein"<< " "<<cost<<endl;
                    } else if (dish_code == 6){
                        cost = quantity*170;
                        file << "Chicken Chowmein"  <<" "<< cost<<endl;}
                    else if (dish_code == 7){
                        cost = quantity*200;
                        file << "Chicken Prawn Chowmein"  <<" "<< cost<<endl;}
                    else if (dish_code == 8){
                        cost = quantity*150;
                        file << "Chicken Chilli" << " " <<cost<<endl;}
                    bill += cost;
                }
            else if(course==300) {
                    cout << "Welcome to Soups section:" << endl;
                    cout << "Enter your dish code:" << endl;
                    cin >> dish_code;
                    cout << "Enter quantity:" << endl;
                    cin >> quantity;
                    if (dish_code == 9) {
                        cost = quantity*75;
                        file << "Tomato Soup" <<" "<< cost<<endl;
                    } else if (dish_code == 10){
                        cost = quantity*135;
                        file << "Chicken Chilli Soup"<<""<< cost<<endl;}
                    else if (dish_code == 11){
                        cost = quantity*110;
                        file << "Sweet Corn Soup" << " "<< cost<<endl;}
                    else if (dish_code == 12){
                        cost = quantity*140;
                        file << "Mushroom Soup"  << " " <<cost<<endl;}
                    bill += cost;

                }
            else if(course==400) {
                    cout << "Welcome to Rice section:" << endl;
                    cout << "Enter your dish code:" << endl;
                    cin >> dish_code;
                    cout << "Enter quantity:" << endl;
                    cin >> quantity;
                    if (dish_code == 13) {
                        cost = quantity*140;
                        file << "Jeera Rice" <<" "<< cost<<endl;
                    } else if (dish_code == 14){
                        cost = quantity*160;
                        file << "Fried Rice"  << " "<<cost<<endl;}
                    else if (dish_code == 15){
                        cost = quantity*120;
                        file << "Plain Rice" << " "<<cost<<endl;}
                    else if (dish_code == 16){
                        cost = quantity*200;
                        file << "Chicken Biryani" << " "<<cost<<endl;}
                    bill += cost;

                }
            else if (course==500) {
                    cout << "Welcome to Gravy section:" << endl;
                    cout << "Enter your dish code:" << endl;
                    cin >> dish_code;
                    cout << "Enter quantity:" << endl;
                    cin >> quantity;
                    if (dish_code == 17) {
                        cost = quantity*140;
                        file << "Paneer Kadhai"<< " "<<cost<<endl;
                    } else if (dish_code == 18){
                        cost = quantity*175;
                        file << "Veg Mix" << " "<<cost<<endl;}
                    else if (dish_code == 19){
                        cost = quantity*155;
                        file << "Palak Paneer" << " " <<cost<<endl;}
                    else if (dish_code == 20){
                        cost = quantity*140;
                        file << "Dal Fry" <<" "<< cost<<endl;}
                    bill += cost;

                }
        }

        while (course!=0);
    }
        file << endl;
    file << "Total Bill :" <<  bill<<endl;

    return 0;

}
