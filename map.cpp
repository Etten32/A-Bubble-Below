//A class to store deal with the map data and manage the submarine's position
#include <stdio.h>
#define xSeaSize 30
#define ySeaSize 30

class map{
    private:
        //VARIABLES
        //positions are from arrays point of view
        int xSubPosition; 
        int ySubPosition;

        char** sea;

    public:
        //FUNCTIONS
        map(){ //default configuration
            xSubPosition = 0;
            ySubPosition = 0;
            //set up sea-map
            sea = new char*[xSeaSize];
            for(int yi = 0; yi < ySeaSize; yi++){
                sea[yi] = new char[ySeaSize];
                for(int xi = 0; xi < xSeaSize; xi++){
                    sea[xi][yi] = yi == ySeaSize - 1 ? '.': ' ';
                }
            }
        }
        ~map(){
            //delete sea array
            //**NOT IMPLEMENTED
        }

        //*
        void printFull(){
            for(int yi = 0; yi < ySeaSize; yi++){
                printf("\n");
                for(int xi = 0; xi < xSeaSize; xi++){
                    printf("%c", sea[xi][yi]);
                }
            }
        }//*/

        

}; 
//FOR TESTING PURPOSES
int main(int argc, char* args[]){ 
    map example = map();
    example.printFull();
    return 1; 
} 
