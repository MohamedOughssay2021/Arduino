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
        cube.createFrame((const byte[]) {2,2}, 2, 200),
        cube.createFrame((const byte[]) {2,1}, 2, 200),
        cube.createFrame((const byte[]) {2,0}, 2, 200),
        cube.createFrame((const byte[]) {2,3}, 2, 200),
        cube.createFrame((const byte[]) {2,4}, 2, 200),
        cube.createFrame((const byte[]) {2,5}, 2, 200),
        cube.createFrame((const byte[]) {2,8}, 2, 200),
        cube.createFrame((const byte[]) {2,7}, 2, 200),
        cube.createFrame((const byte[]) {2,6}, 2, 200),
        cube.createFrame((const byte[]) {1,6}, 2, 200),
        cube.createFrame((const byte[]) {1,7}, 2, 200),
        cube.createFrame((const byte[]) {1,8}, 2, 200),
        cube.createFrame((const byte[]) {1,5}, 2, 200),
        cube.createFrame((const byte[]) {1,4}, 2, 200),
        cube.createFrame((const byte[]) {1,3}, 2, 200),
        cube.createFrame((const byte[]) {1,0}, 2, 200),
        cube.createFrame((const byte[]) {1,1}, 2, 200),
        cube.createFrame((const byte[]) {1,2}, 2, 200),
        cube.createFrame((const byte[]) {0,2}, 2, 200),
        cube.createFrame((const byte[]) {0,1}, 2, 200),
        cube.createFrame((const byte[]) {0,0}, 2, 200),
        cube.createFrame((const byte[]) {0,3}, 2, 200),
        cube.createFrame((const byte[]) {0,4}, 2, 200),
        cube.createFrame((const byte[]) {0,5}, 2, 200),
        cube.createFrame((const byte[]) {0,8}, 2, 200),
        cube.createFrame((const byte[]) {0,7}, 2, 200),
        cube.createFrame((const byte[]) {0,6}, 2, 200),
        cube.createFrame((const byte[]) {1,6}, 2, 200),
        cube.createFrame((const byte[]) {2,6}, 2, 200),
        cube.createFrame((const byte[]) {2,7, 2,8}, 4, 108),
        cube.createFrame((const byte[]) {2,5, 2,8}, 4, 108),
        cube.createFrame((const byte[]) {2,4, 2,5}, 4, 108),
        cube.createFrame((const byte[]) {2,3, 2,4}, 4, 108),
        cube.createFrame((const byte[]) {2,0, 2,3}, 4, 108),
        cube.createFrame((const byte[]) {2,0, 2,1}, 4, 108),
        cube.createFrame((const byte[]) {2,1, 2,2}, 4, 108),
        cube.createFrame((const byte[]) {1,2, 2,2}, 4, 108),
        cube.createFrame((const byte[]) {1,1, 1,2}, 4, 108),
        cube.createFrame((const byte[]) {1,0, 1,1}, 4, 108),
        cube.createFrame((const byte[]) {1,0, 1,3}, 4, 108),
        cube.createFrame((const byte[]) {1,3, 1,4}, 4, 108),
        cube.createFrame((const byte[]) {1,4, 1,5}, 4, 108),
        cube.createFrame((const byte[]) {1,5, 1,8}, 4, 108),
        cube.createFrame((const byte[]) {1,7, 1,8}, 4, 108),
        cube.createFrame((const byte[]) {1,6, 1,7}, 4, 108),
        cube.createFrame((const byte[]) {0,6, 1,6}, 4, 108),
        cube.createFrame((const byte[]) {0,6, 0,7}, 4, 108),
        cube.createFrame((const byte[]) {0,7, 0,8}, 4, 108),
        cube.createFrame((const byte[]) {0,5, 0,8}, 4, 108),
        cube.createFrame((const byte[]) {0,4, 0,5}, 4, 108),
        cube.createFrame((const byte[]) {0,3, 0,4}, 4, 108),
        cube.createFrame((const byte[]) {0,0, 0,3}, 4, 108),
        cube.createFrame((const byte[]) {0,0, 0,1}, 4, 108),
        cube.createFrame((const byte[]) {0,1, 0,2}, 4, 108),
        cube.createFrame((const byte[]) {0,2, 1,2}, 4, 108),
        cube.createFrame((const byte[]) {1,2, 2,2}, 4, 108),
        cube.createFrame((const byte[]) {2,0, 2,1, 2,3}, 6, 60),
        cube.createFrame((const byte[]) {2,0, 2,3, 2,4}, 6, 60),
        cube.createFrame((const byte[]) {2,3, 2,4, 2,5}, 6, 60),
        cube.createFrame((const byte[]) {2,4, 2,5, 2,8}, 6, 60),
        cube.createFrame((const byte[]) {2,5, 2,7, 2,8}, 6, 60),
        cube.createFrame((const byte[]) {2,6, 2,7, 2,8}, 6, 60),
        cube.createFrame((const byte[]) {1,6, 2,6, 2,7}, 6, 60),
        cube.createFrame((const byte[]) {1,6, 1,7, 2,6}, 6, 60),
        cube.createFrame((const byte[]) {1,6, 1,7, 1,8}, 6, 60),
        cube.createFrame((const byte[]) {1,5, 1,7, 1,8}, 6, 60),
        cube.createFrame((const byte[]) {1,4, 1,5, 1,8}, 6, 60),
        cube.createFrame((const byte[]) {1,3, 1,4, 1,5}, 6, 60),
        cube.createFrame((const byte[]) {1,0, 1,3, 1,4}, 6, 60),
        cube.createFrame((const byte[]) {1,0, 1,1, 1,3}, 6, 60),
        cube.createFrame((const byte[]) {1,0, 1,1, 1,2}, 6, 60),
        cube.createFrame((const byte[]) {0,2, 1,1, 1,2}, 6, 60),
        cube.createFrame((const byte[]) {0,1, 0,2, 1,2}, 6, 60),
        cube.createFrame((const byte[]) {0,0, 0,1, 0,2}, 6, 60),
        cube.createFrame((const byte[]) {0,0, 0,1, 0,3}, 6, 60),
        cube.createFrame((const byte[]) {0,0, 0,3, 0,4}, 6, 60),
        cube.createFrame((const byte[]) {0,3, 0,4, 0,5}, 6, 60),
        cube.createFrame((const byte[]) {0,4, 0,5, 0,8}, 6, 60),
        cube.createFrame((const byte[]) {0,5, 0,7, 0,8}, 6, 60),
        cube.createFrame((const byte[]) {0,6, 0,7, 0,8}, 6, 60),
        cube.createFrame((const byte[]) {0,6, 0,7, 1,6}, 6, 60),
        cube.createFrame((const byte[]) {0,6, 1,6, 2,6}, 6, 60),
        cube.createFrame((const byte[]) {1,6, 2,6, 2,7}, 6, 60),
        cube.createFrame((const byte[]) {2,5, 2,6, 2,7, 2,8}, 8, 30),
        cube.createFrame((const byte[]) {2,4, 2,5, 2,7, 2,8}, 8, 30),
        cube.createFrame((const byte[]) {2,3, 2,4, 2,5, 2,8}, 8, 30),
        cube.createFrame((const byte[]) {2,0, 2,3, 2,4, 2,5}, 8, 30),
        cube.createFrame((const byte[]) {2,0, 2,1, 2,3, 2,4}, 8, 30),
        cube.createFrame((const byte[]) {2,0, 2,1, 2,2, 2,3}, 8, 30),
        cube.createFrame((const byte[]) {1,2, 2,0, 2,1, 2,2}, 8, 30),
        cube.createFrame((const byte[]) {1,1, 1,2, 2,0, 2,1}, 8, 30),
        cube.createFrame((const byte[]) {1,0, 1,1, 1,2, 2,0}, 8, 30),
        cube.createFrame((const byte[]) {1,0, 1,1, 1,2, 1,3}, 8, 30),
        cube.createFrame((const byte[]) {1,0, 1,1, 1,3, 1,4}, 8, 30),
        cube.createFrame((const byte[]) {1,0, 1,3, 1,4, 1,5}, 8, 30),
        cube.createFrame((const byte[]) {1,3, 1,4, 1,5, 1,8}, 8, 30),
        cube.createFrame((const byte[]) {1,4, 1,5, 1,7, 1,8}, 8, 30),
        cube.createFrame((const byte[]) {1,5, 1,6, 1,7, 1,8}, 8, 30),
        cube.createFrame((const byte[]) {0,6, 1,6, 1,7, 1,8}, 8, 30),
        cube.createFrame((const byte[]) {0,6, 0,7, 1,6, 1,7}, 8, 30),
        cube.createFrame((const byte[]) {0,6, 0,7, 0,8, 1,6}, 8, 30),
        cube.createFrame((const byte[]) {0,5, 0,6, 0,7, 0,8}, 8, 30),
        cube.createFrame((const byte[]) {0,4, 0,5, 0,7, 0,8}, 8, 30),
        cube.createFrame((const byte[]) {0,3, 0,4, 0,5, 0,8}, 8, 30),
        cube.createFrame((const byte[]) {0,0, 0,3, 0,4, 0,5}, 8, 30),
        cube.createFrame((const byte[]) {0,0, 0,1, 0,3, 0,4}, 8, 30),
        cube.createFrame((const byte[]) {0,0, 0,1, 0,2, 0,3}, 8, 30),
        cube.createFrame((const byte[]) {0,0, 0,1, 0,2, 0,5}, 8, 30),
        cube.createFrame((const byte[]) {0,1, 0,2, 0,4, 0,5, 2,0, 2,1, 2,2, 2,3, 2,4, 2,5, 2,6, 2,7, 2,8}, 26, 70),
        cube.createFrame((const byte[]) {0,2, 0,4, 0,5, 1,4, 2,0, 2,1, 2,2, 2,3, 2,4, 2,5, 2,6, 2,7, 2,8}, 26, 70),
        cube.createFrame((const byte[]) {0,4, 0,5, 1,4, 2,0, 2,1, 2,2, 2,3, 2,5, 2,6, 2,7, 2,8}, 22, 70),
        cube.createFrame((const byte[]) {0,4, 1,4, 2,0, 2,2, 2,6, 2,8}, 12, 70),
        cube.createFrame((const byte[]) {1,4, 2,4}, 4, 70),
        cube.createFrame((const byte[]) {2,4}, 2, 70)
    };
    cube.lightFrames(f, 114);
}
