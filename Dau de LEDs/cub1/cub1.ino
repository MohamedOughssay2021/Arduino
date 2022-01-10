/*
    ledcube.pde - Example sketch for controlling an LED cube.
    Created by Gamaiel Zavala (gzip), 2009-2014
    MIT License. See accompanying LICENSE file for terms.
*/

#include <LedCube.h>

#define SIZE 3
#define COLS (SIZE*SIZE)

byte levelPins[SIZE] = {11,12,13};
byte colPins[COLS] = {2,3,4,5,6,7,8,9,10};

LedCube cube(SIZE, levelPins, colPins);

//#define DEBUG
#ifdef DEBUG
#include <memdebug.h>
void showmem(const char label[] = "")
{
  char buffer[100];
 
  sprintf(buffer,"%s: %04u %04u : used/free",
      label,
      getMemoryUsed(),
      getFreeMemory()
    );
 
  Serial.println(buffer);
}
#endif

void setup ()
{
#ifdef DEBUG
    Serial.begin(9600);
#endif
}

void loop ()
{
    delay(10);
    
#ifdef DEBUG
    showmem("start");
#endif
    // paste UI output here (https://rawgithub.com/gzip/arduino-ledcube/master/ui/index.html)
                   cubeFrame* f[] = {
        cube.createFrame((const byte[]) {0,6, 0,7, 0,8, 1,3, 1,4, 1,5, 2,0, 2,1, 2,2}, 18, 20),
        cube.createFrame((const byte[]) {0,0, 0,3, 0,6, 1,1, 1,4, 1,7, 2,2, 2,5, 2,8}, 18, 20),
        cube.createFrame((const byte[]) {0,0, 0,1, 0,2, 1,3, 1,4, 1,5, 2,6, 2,7, 2,8}, 18, 20),
        cube.createFrame((const byte[]) {0,2, 0,5, 0,8, 1,1, 1,4, 1,7, 2,0, 2,3, 2,6}, 18, 20),
        cube.createFrame((const byte[]) {0,6, 0,7, 0,8, 1,3, 1,4, 1,5, 2,0, 2,1, 2,2}, 18, 20),
        cube.createFrame((const byte[]) {0,0, 0,3, 0,6, 1,1, 1,4, 1,7, 2,2, 2,5, 2,8}, 18, 20),
        cube.createFrame((const byte[]) {0,0, 0,1, 0,2, 1,3, 1,4, 1,5, 2,6, 2,7, 2,8}, 18, 20),
        cube.createFrame((const byte[]) {0,2, 0,5, 0,8, 1,1, 1,4, 1,7, 2,0, 2,3, 2,6}, 18, 20),
        cube.createFrame((const byte[]) {0,6, 0,7, 0,8, 1,3, 1,4, 1,5, 2,0, 2,1, 2,2}, 18, 20),
        cube.createFrame((const byte[]) {0,0, 0,3, 0,6, 1,1, 1,4, 1,7, 2,2, 2,5, 2,8}, 18, 20),
        cube.createFrame((const byte[]) {0,0, 0,1, 0,2, 1,3, 1,4, 1,5, 2,6, 2,7, 2,8}, 18, 20),
        cube.createFrame((const byte[]) {0,2, 0,5, 0,8, 1,1, 1,4, 1,7, 2,0, 2,3, 2,6}, 18, 20),
        cube.createFrame((const byte[]) {0,6, 0,7, 0,8, 1,3, 1,4, 1,5, 2,0, 2,1, 2,2}, 18, 20),
        cube.createFrame((const byte[]) {0,0, 0,3, 0,6, 1,1, 1,4, 1,7, 2,2, 2,5, 2,8}, 18, 20),
        cube.createFrame((const byte[]) {0,0, 0,1, 0,2, 1,3, 1,4, 1,5, 2,6, 2,7, 2,8}, 18, 20),
        cube.createFrame((const byte[]) {0,2, 0,5, 0,8, 1,1, 1,4, 1,7, 2,0, 2,3, 2,6}, 18, 20),
        cube.createFrame((const byte[]) {0,6, 0,7, 0,8, 1,3, 1,4, 1,5, 2,0, 2,1, 2,2}, 18, 20),
        cube.createFrame((const byte[]) {0,0, 0,3, 0,6, 1,1, 1,4, 1,7, 2,2, 2,5, 2,8}, 18, 20),
        cube.createFrame((const byte[]) {0,0, 0,1, 0,2, 1,3, 1,4, 1,5, 2,6, 2,7, 2,8}, 18, 20),
        cube.createFrame((const byte[]) {0,2, 0,5, 0,8, 1,1, 1,4, 1,7, 2,0, 2,3, 2,6}, 18, 20),
        cube.createFrame((const byte[]) {0,6, 0,7, 0,8, 1,3, 1,4, 1,5, 2,0, 2,1, 2,2}, 18, 20),
        cube.createFrame((const byte[]) {0,0, 0,3, 0,6, 1,1, 1,4, 1,7, 2,2, 2,5, 2,8}, 18, 20),
        cube.createFrame((const byte[]) {0,0, 0,1, 0,2, 1,3, 1,4, 1,5, 2,6, 2,7, 2,8}, 18, 20),
        cube.createFrame((const byte[]) {0,2, 0,5, 0,8, 1,1, 1,4, 1,7, 2,0, 2,3, 2,6}, 18, 20),
        cube.createFrame((const byte[]) {0,6, 0,7, 0,8, 1,3, 1,4, 1,5, 2,0, 2,1, 2,2}, 18, 20),
        cube.createFrame((const byte[]) {0,0, 0,3, 0,6, 1,1, 1,4, 1,7, 2,2, 2,5, 2,8}, 18, 20),
        cube.createFrame((const byte[]) {0,0, 0,1, 0,2, 1,3, 1,4, 1,5, 2,6, 2,7, 2,8}, 18, 20),
        cube.createFrame((const byte[]) {0,2, 0,5, 0,8, 1,1, 1,4, 1,7, 2,0, 2,3, 2,6}, 18, 20),
        cube.createFrame((const byte[]) {0,6, 0,7, 0,8, 1,3, 1,4, 1,5, 2,0, 2,1, 2,2}, 18, 20),
        cube.createFrame((const byte[]) {0,0, 0,3, 0,6, 1,1, 1,4, 1,7, 2,2, 2,5, 2,8}, 18, 20),
        cube.createFrame((const byte[]) {0,0, 0,1, 0,2, 1,3, 1,4, 1,5, 2,6, 2,7, 2,8}, 18, 20),
        cube.createFrame((const byte[]) {0,2, 0,5, 0,8, 1,1, 1,4, 1,7, 2,0, 2,3, 2,6}, 18, 20),
        cube.createFrame((const byte[]) {0,6, 0,7, 0,8, 1,3, 1,4, 1,5, 2,0, 2,1, 2,2}, 18, 20),
        cube.createFrame((const byte[]) {0,0, 0,3, 0,6, 1,1, 1,4, 1,7, 2,2, 2,5, 2,8}, 18, 20),
        cube.createFrame((const byte[]) {0,0, 0,1, 0,2, 1,3, 1,4, 1,5, 2,6, 2,7, 2,8}, 18, 20),
        cube.createFrame((const byte[]) {0,2, 0,5, 0,8, 1,1, 1,4, 1,7, 2,0, 2,3, 2,6}, 18, 20),
        cube.createFrame((const byte[]) {0,6, 0,7, 0,8, 1,3, 1,4, 1,5, 2,0, 2,1, 2,2}, 18, 20),
        cube.createFrame((const byte[]) {0,0, 0,3, 0,6, 1,1, 1,4, 1,7, 2,2, 2,5, 2,8}, 18, 20),
        cube.createFrame((const byte[]) {0,0, 0,1, 0,2, 1,3, 1,4, 1,5, 2,6, 2,7, 2,8}, 18, 20),
        cube.createFrame((const byte[]) {0,2, 0,5, 0,8, 1,1, 1,4, 1,7, 2,0, 2,3, 2,6}, 18, 20),
        cube.createFrame((const byte[]) {0,6, 0,7, 0,8, 1,3, 1,4, 1,5, 2,0, 2,1, 2,2}, 18, 20),
        cube.createFrame((const byte[]) {0,0, 0,3, 0,6, 1,1, 1,4, 1,7, 2,2, 2,5, 2,8}, 18, 20),
        cube.createFrame((const byte[]) {0,0, 0,1, 0,2, 1,3, 1,4, 1,5, 2,6, 2,7, 2,8}, 18, 20),
        cube.createFrame((const byte[]) {0,2, 0,5, 0,8, 1,1, 1,4, 1,7, 2,0, 2,3, 2,6}, 18, 20),
        cube.createFrame((const byte[]) {0,6, 0,7, 0,8, 1,3, 1,4, 1,5, 2,0, 2,1, 2,2}, 18, 20),
        cube.createFrame((const byte[]) {0,0, 0,3, 0,6, 1,1, 1,4, 1,7, 2,2, 2,5, 2,8}, 18, 20),
        cube.createFrame((const byte[]) {0,0, 0,1, 0,2, 1,3, 1,4, 1,5, 2,6, 2,7, 2,8}, 18, 20),
        cube.createFrame((const byte[]) {0,2, 0,5, 0,8, 1,1, 1,4, 1,7, 2,0, 2,3, 2,6}, 18, 20),
        cube.createFrame((const byte[]) {0,0, 1,4, 2,8}, 6, 50),
        cube.createFrame((const byte[]) {0,2, 1,4, 2,6}, 6, 50),
        cube.createFrame((const byte[]) {0,8, 1,4, 2,0}, 6, 50),
        cube.createFrame((const byte[]) {0,6, 1,4, 2,2}, 6, 50),
        cube.createFrame((const byte[]) {0,0, 1,4, 2,8}, 6, 50),
        cube.createFrame((const byte[]) {0,2, 1,4, 2,6}, 6, 50),
        cube.createFrame((const byte[]) {0,8, 1,4, 2,0}, 6, 50),
        cube.createFrame((const byte[]) {0,6, 1,4, 2,2}, 6, 50),
        cube.createFrame((const byte[]) {0,0, 1,4, 2,8}, 6, 50),
        cube.createFrame((const byte[]) {0,2, 1,4, 2,6}, 6, 50),
        cube.createFrame((const byte[]) {0,8, 1,4, 2,0}, 6, 50),
        cube.createFrame((const byte[]) {0,6, 1,4, 2,2}, 6, 50),
        cube.createFrame((const byte[]) {0,0, 1,4, 2,8}, 6, 50),
        cube.createFrame((const byte[]) {0,2, 1,4, 2,6}, 6, 50),
        cube.createFrame((const byte[]) {0,8, 1,4, 2,0}, 6, 50),
        cube.createFrame((const byte[]) {0,6, 1,4, 2,2}, 6, 50),
        cube.createFrame((const byte[]) {0,0, 1,4, 2,8}, 6, 50),
        cube.createFrame((const byte[]) {0,2, 1,4, 2,6}, 6, 50),
        cube.createFrame((const byte[]) {0,8, 1,4, 2,0}, 6, 50),
        cube.createFrame((const byte[]) {0,6, 1,4, 2,2}, 6, 50),
        cube.createFrame((const byte[]) {0,0, 1,4, 2,8}, 6, 50),
        cube.createFrame((const byte[]) {0,2, 1,4, 2,6}, 6, 50),
        cube.createFrame((const byte[]) {0,8, 1,4, 2,0}, 6, 50),
        cube.createFrame((const byte[]) {0,0, 1,4, 2,8}, 6, 50),
        cube.createFrame((const byte[]) {0,2, 1,4, 2,6}, 6, 50),
        cube.createFrame((const byte[]) {0,8, 1,4, 2,0}, 6, 50),
        cube.createFrame((const byte[]) {0,6, 1,4, 2,2}, 6, 50),
        cube.createFrame((const byte[]) {0,0, 1,4, 2,8}, 6, 50),
        cube.createFrame((const byte[]) {0,2, 1,4, 2,6}, 6, 50),
        cube.createFrame((const byte[]) {0,8, 1,4, 2,0}, 6, 50),
        cube.createFrame((const byte[]) {0,6, 1,4, 2,2}, 6, 50),
        cube.createFrame((const byte[]) {0,0, 1,4, 2,8}, 6, 50),
        cube.createFrame((const byte[]) {0,2, 1,4, 2,6}, 6, 50),
        cube.createFrame((const byte[]) {0,8, 1,4, 2,0}, 6, 50),
        cube.createFrame((const byte[]) {0,6, 1,4, 2,2}, 6, 50),
        cube.createFrame((const byte[]) {0,0, 1,4, 2,8}, 6, 50),
        cube.createFrame((const byte[]) {0,2, 1,4, 2,6}, 6, 50),
        cube.createFrame((const byte[]) {0,8, 1,4, 2,0}, 6, 50),
        cube.createFrame((const byte[]) {0,6, 1,4, 2,2}, 6, 50),
        cube.createFrame((const byte[]) {0,0, 1,4, 2,8}, 6, 50),
        cube.createFrame((const byte[]) {0,2, 1,4, 2,6}, 6, 50),
        cube.createFrame((const byte[]) {0,8, 1,4, 2,0}, 6, 50),
        cube.createFrame((const byte[]) {0,6, 1,4, 2,2}, 6, 50),
        cube.createFrame((const byte[]) {0,0, 1,4, 2,8}, 6, 50),
        cube.createFrame((const byte[]) {0,2, 1,4, 2,6}, 6, 50),
        cube.createFrame((const byte[]) {0,8, 1,4, 2,0}, 6, 30),
        cube.createFrame((const byte[]) {0,6, 1,4, 2,2}, 6, 30),
        cube.createFrame((const byte[]) {0,0, 1,4, 2,8}, 6, 30),
        cube.createFrame((const byte[]) {0,2, 1,4, 2,6}, 6, 30),
        cube.createFrame((const byte[]) {0,8, 1,4, 2,0}, 6, 30),
        cube.createFrame((const byte[]) {0,6, 1,4, 2,2}, 6, 30),
        cube.createFrame((const byte[]) {0,0, 1,4, 2,8}, 6, 30),
        cube.createFrame((const byte[]) {0,2, 1,4, 2,6}, 6, 30),
        cube.createFrame((const byte[]) {0,8, 1,4, 2,0}, 6, 30),
        cube.createFrame((const byte[]) {0,6, 1,4, 2,2}, 6, 30),
        cube.createFrame((const byte[]) {0,0, 1,4, 2,8}, 6, 30),
        cube.createFrame((const byte[]) {0,2, 1,4, 2,6}, 6, 30),
        cube.createFrame((const byte[]) {0,8, 1,4, 2,0}, 6, 30),
        cube.createFrame((const byte[]) {0,6, 1,4, 2,2}, 6, 30),
        cube.createFrame((const byte[]) {0,0, 1,4, 2,8}, 6, 30),
        cube.createFrame((const byte[]) {0,2, 1,4, 2,6}, 6, 30),
        cube.createFrame((const byte[]) {0,8, 1,4, 2,0}, 6, 30),
        cube.createFrame((const byte[]) {0,6, 1,4, 2,2}, 6, 30),
        cube.createFrame((const byte[]) {0,0, 1,4, 2,8}, 6, 30),
        cube.createFrame((const byte[]) {0,2, 1,4, 2,6}, 6, 30),
        cube.createFrame((const byte[]) {0,8, 1,4, 2,0}, 6, 30),
        cube.createFrame((const byte[]) {0,6, 1,4, 2,2}, 6, 30),
        cube.createFrame((const byte[]) {0,0, 1,4, 2,8}, 6, 30),
        cube.createFrame((const byte[]) {0,2, 1,4, 2,6}, 6, 30),
        cube.createFrame((const byte[]) {0,8, 1,4, 2,0}, 6, 30),
        cube.createFrame((const byte[]) {0,0, 1,4, 2,8}, 6, 30),
        cube.createFrame((const byte[]) {0,2, 1,4, 2,6}, 6, 30),
        cube.createFrame((const byte[]) {0,8, 1,4, 2,0}, 6, 30),
        cube.createFrame((const byte[]) {0,6, 1,4, 2,2}, 6, 30),
        cube.createFrame((const byte[]) {0,0, 1,4, 2,8}, 6, 30),
        cube.createFrame((const byte[]) {0,2, 1,4, 2,6}, 6, 30),
        cube.createFrame((const byte[]) {0,8, 1,4, 2,0}, 6, 30),
        cube.createFrame((const byte[]) {0,6, 1,4, 2,2}, 6, 30),
        cube.createFrame((const byte[]) {0,0, 1,4, 2,8}, 6, 30),
        cube.createFrame((const byte[]) {0,2, 1,4, 2,6}, 6, 30),
        cube.createFrame((const byte[]) {0,8, 1,4, 2,0}, 6, 30),
        cube.createFrame((const byte[]) {0,6, 1,4, 2,2}, 6, 30),
        cube.createFrame((const byte[]) {0,0, 1,4, 2,8}, 6, 30),
        cube.createFrame((const byte[]) {0,2, 1,4, 2,6}, 6, 30),
        cube.createFrame((const byte[]) {0,8, 1,4, 2,0}, 6, 30),
        cube.createFrame((const byte[]) {0,6, 1,4, 2,2}, 6, 30),
        cube.createFrame((const byte[]) {0,0, 1,4, 2,8}, 6, 30),
        cube.createFrame((const byte[]) {0,2, 1,4, 2,6}, 6, 30),
        cube.createFrame((const byte[]) {0,8, 1,4, 2,0}, 6, 30),
        cube.createFrame((const byte[]) {0,6, 1,4, 2,2}, 6, 30),
        cube.createFrame((const byte[]) {0,0, 1,4, 2,8}, 6, 30),
        cube.createFrame((const byte[]) {0,2, 1,4, 2,6}, 6, 30),
        cube.createFrame((const byte[]) {0,8, 1,4, 2,0}, 6, 30),
        cube.createFrame((const byte[]) {0,6, 1,4, 2,2}, 6, 30),
        cube.createFrame((const byte[]) {0,6, 0,7, 0,8}, 6, 108),
        cube.createFrame((const byte[]) {0,3, 0,4, 0,5}, 6, 108),
        cube.createFrame((const byte[]) {0,0, 0,1, 0,2}, 6, 108),
        cube.createFrame((const byte[]) {1,0, 1,1, 1,2}, 6, 108),
        cube.createFrame((const byte[]) {1,3, 1,4, 1,5}, 6, 108),
        cube.createFrame((const byte[]) {1,6, 1,7, 1,8}, 6, 108),
        cube.createFrame((const byte[]) {2,6, 2,7, 2,8}, 6, 108),
        cube.createFrame((const byte[]) {2,3, 2,4, 2,5}, 6, 108),
        cube.createFrame((const byte[]) {2,0, 2,1, 2,2}, 6, 108),
        cube.createFrame((const byte[]) {0,6, 0,7, 0,8}, 6, 50),
        cube.createFrame((const byte[]) {0,3, 0,4, 0,5}, 6, 50),
        cube.createFrame((const byte[]) {0,0, 0,1, 0,2}, 6, 50),
        cube.createFrame((const byte[]) {1,0, 1,1, 1,2}, 6, 50),
        cube.createFrame((const byte[]) {1,3, 1,4, 1,5}, 6, 50),
        cube.createFrame((const byte[]) {1,6, 1,7, 1,8}, 6, 50),
        cube.createFrame((const byte[]) {2,6, 2,7, 2,8}, 6, 50),
        cube.createFrame((const byte[]) {2,3, 2,4, 2,5}, 6, 50),
        cube.createFrame((const byte[]) {2,0, 2,1, 2,2}, 6, 50),
        cube.createFrame((const byte[]) {0,6, 0,7, 0,8}, 6, 30),
        cube.createFrame((const byte[]) {0,3, 0,4, 0,5}, 6, 30),
        cube.createFrame((const byte[]) {0,0, 0,1, 0,2}, 6, 30),
        cube.createFrame((const byte[]) {1,0, 1,1, 1,2}, 6, 30),
        cube.createFrame((const byte[]) {1,3, 1,4, 1,5}, 6, 30),
        cube.createFrame((const byte[]) {1,6, 1,7, 1,8}, 6, 30),
        cube.createFrame((const byte[]) {2,6, 2,7, 2,8}, 6, 30),
        cube.createFrame((const byte[]) {2,3, 2,4, 2,5}, 6, 30),
        cube.createFrame((const byte[]) {2,0, 2,1, 2,2}, 6, 30),
        cube.createFrame((const byte[]) {0,6, 0,7, 0,8}, 6, 10),
        cube.createFrame((const byte[]) {0,3, 0,4, 0,5}, 6, 10),
        cube.createFrame((const byte[]) {0,0, 0,1, 0,2}, 6, 10),
        cube.createFrame((const byte[]) {1,0, 1,1, 1,2}, 6, 10),
        cube.createFrame((const byte[]) {1,3, 1,4, 1,5}, 6, 10),
        cube.createFrame((const byte[]) {1,6, 1,7, 1,8}, 6, 10),
        cube.createFrame((const byte[]) {2,6, 2,7, 2,8}, 6, 10),
        cube.createFrame((const byte[]) {2,3, 2,4, 2,5}, 6, 10),
        cube.createFrame((const byte[]) {2,0, 2,1, 2,2}, 6, 10),
        cube.createFrame((const byte[]) {0,6, 0,7, 0,8}, 6, 5),
        cube.createFrame((const byte[]) {0,3, 0,4, 0,5}, 6, 5),
        cube.createFrame((const byte[]) {0,0, 0,1, 0,2}, 6, 5),
        cube.createFrame((const byte[]) {1,0, 1,1, 1,2}, 6, 5),
        cube.createFrame((const byte[]) {1,3, 1,4, 1,5}, 6, 5),
        cube.createFrame((const byte[]) {1,6, 1,7, 1,8}, 6, 5),
        cube.createFrame((const byte[]) {2,6, 2,7, 2,8}, 6, 5),
        cube.createFrame((const byte[]) {2,3, 2,4, 2,5}, 6, 5),
        cube.createFrame((const byte[]) {2,0, 2,1, 2,2}, 6, 5)
        
    };
    cube.lightFrames(f, 169);
}
