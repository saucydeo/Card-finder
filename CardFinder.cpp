#include <iostream>

int find(int arr[], int len, int seek)
{
    for (int i = 0; i < len; ++i)
    {
        if (arr[i] == seek) return i;
    }
    return -1;
}

int main(){

    int deck[] = {1, 2, 6, 8, 9, 3, 5};
    int card = deck[6]; // is 2 in deck 
    int middle_of_deck = sizeof(deck) / sizeof(int) / 2;
    int position;
    int postion_1;
    int x = find(deck,7,5); //finds the card ur looking for

    if(middle_of_deck % 2){
        position = deck[middle_of_deck];
    } 
    else{
        position = deck[middle_of_deck -= 1];     
    }

    //How to find a card
    while(1==1){
        int y = find(deck,7,8); //stays the same
        postion_1 = position;
        std::cout << "Card Start is: " << y << "\n";
        std::cout << "Card were looking for: " << card << "\n";
        if(postion_1 > card){
            postion_1 = deck[middle_of_deck -= 1];
        }
        else{
            postion_1 = deck[middle_of_deck += 1];
        }
        if(postion_1 = card){
            std::cout << "Card found.\n";
            std::cout << "Card postion: " << x;
            break;
        }

    }
    
    return 0;
} 
