#include <iostream>

int main()
{
    int hour;
    int min;
    std::string am_pm;
    std::cout << "Enter the time"<< std::endl;
    std::cout << "Enter hour"<< std::endl;
    std::cin >> hour;
    std::cout << "Enter minutes"<< std::endl;
    std::cin >> min;
    std::cout << "Enter am or pm"<< std::endl;
    std::cin >> am_pm;
    if (min>=0 && min<60 && hour>0 && hour<13){

        if (am_pm=="am")
        {
            std::cout << "Good morning. The time is " << hour << ":"<< min<<" " <<am_pm<<"."<< std::endl;
        }
        else if (hour>=1 && am_pm=="pm")
        {
            std::cout << "Good Afternoon. The time is "<< hour <<":"<< min<<" " <<am_pm<<".";
        }
        else if (hour>5 && am_pm=="pm")
        {
            std::cout << "Good Evening. The time is "<< hour <<":"<< min <<" "<<am_pm<<".";
        }
        else if (hour>9 && am_pm=="pm")
        {
            std::cout << "Good Night. The time is "<< hour <<":"<< min<<" "<<am_pm<<".";
        }
        else 
        {
            std::cout<<"Invade Entry";
        }
    }
    else 
    {
        std::cout<<"Invade Entry";
    }
    return 0;
}