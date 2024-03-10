#include <iostream> //нужен для вывода строк "cout<<"
#include <conio.h> //нужен намеренно для "getche()", а не "cin>>"
#include <windows.h> //библиотека audiere её требует
#include <audiere/audiere.h> //сама библиотека

using namespace std;
using namespace audiere; //подключаем пространства имён для более короткой записи

int main()
{
    setlocale(0, "Russian"); //пусть наша консоль говорит по-русски
    cout<<"SOUND"<<endl; 

    AudioDevicePtr device  = OpenDevice(); //Для начала нужно открыть AudioDevice 
    OutputStreamPtr sound = OpenSound(device , "poko.wav" , false); //создаем поток для нашего звука
    sound->play(); //проигрываем наш звук
    while(true){

    };
    return 0;

}