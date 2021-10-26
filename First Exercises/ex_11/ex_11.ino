/**********************************************************************************
**                                                                               **
**                               Math Is Fun                                     **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int drive_gb = 100;
long drive_mb, drive_kb, real_drive_mb, real_drive_kb, missing_drive_kb;

//********** Setup ****************************************************************
void setup()
{
Serial.begin (9600);
Serial.print("Your HD is ");
Serial.print(drive_gb);
Serial.println(" GB large.");

drive_mb= 1024.0*drive_gb;

Serial.print("In theory, it can store ");
Serial.print(drive_mb);
Serial.print(" Megabytes, ");

drive_kb= 1048576.0*drive_gb;

Serial.print(drive_kb);
Serial.println(" Kilobytes.");

real_drive_mb= 1000.0*drive_gb;

Serial.print("But it really only stores ");
Serial.print(real_drive_mb);
Serial.print(" Megabytes, ");

real_drive_kb= 1000000.0*drive_gb;

Serial.print(real_drive_kb);
Serial.println(" Kilobytes.");

missing_drive_kb= drive_kb-real_drive_kb;

Serial.print("You are missing ");
Serial.print(missing_drive_kb);
Serial.println(" Kilobytes.");
}

//********** Loop *****************************************************************
void loop()
{
}

//********** Funcions *************************************************************
