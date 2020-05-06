#include <iostream>
#include <windows.h>
using namespace std;

musica() {
	system("color 16");
	char soundfile[] = "G:\\Desktop\okami.wav" ;//Recuerden tener la cancion dentro de la misma carpeta
PlaySound((LPCSTR)soundfile, NULL, SND_FILENAME | SND_ASYNC);
	return 0;
}
