#include<iostream>
using namespace std;
#include <vector>


// Ecrire une fonction swap qui a comme paramètres deux pointeurs vers des entiers et qui échange le contenu des deux entiers pointés.
void swap(int *number_1, int *number_2)
{
	cout << "SWAP" << endl;
    int number_3;
    number_3 = *number_1;
    *number_1 = *number_2;
    *number_2 = number_3;
	cout << *number_1 << endl;
	cout << *number_2 << endl;
}

// Ecrire une fonction qui a comme paramètres un tableau d'entiers de taille quelconque,
// la taille du tableau, et 2 pointeurs vers des entiers min et max. 
//La fonction doit renvoyer dans les entiers pointés par min et max respectivement les plus petits et les plus grands entiers du tableau. 

void get_min_and_max_tab(vector<int> tab, int tab_length, int *min, int *max)
{
	cout << "Minimum et maximum du tableau" << endl;

    for (int value : tab)
    {
		if (value > *max)
		{
			*max = value;
		}

        if (value < *min)
		{
			*min = value;
		}        
    }
	cout << "Minimum : " << *min << endl;
	cout << "Maximum : " << *max << endl;
}

// Ecrire une fonction qui prend en paramètre un pointeur vers un tableau, 
// qui demande à l’utilisateurs de rentrer 5 nombres et qui remplis le tableau grâce au pointeur.

void user_input_fill_tab(int *tab) {
	cout << "Remplir Tableau" << endl;

    std::cout << "Veuillez entrer la première valeur du tableau : " << endl, 
	std::cin >> tab[0];
    std::cout << "Veuillez entrer la deuxième valeur du tableau : " << endl, 
	std::cin >> tab[1];
    std::cout << "Veuillez entrer troisième valeur du tableau : " << endl, 
	std::cin >> tab[2];
    std::cout << "Veuillez entrer quatrième valeur du tableau : " << endl, 
	std::cin >> tab[3];
    std::cout << "Veuillez entrer cinquième valeur du tableau : " << endl, 
	std::cin >> tab[4];
}

int main(int argc, char *argv[]){
	int number_1 = 9;
	int number_2 = 3;
	swap(&number_1, &number_2);

	vector<int> tab{1,2,3,4,5,6,7,8,9};
	int tab_size = tab.size();
	int min;
	int max;
	get_min_and_max_tab(tab, tab_size, &min, &max);
}