#include <iostream>
using namespace std;

int main()
{
    char c_Form;
    char c_Groesse;
    unsigned int i_Laenge;
    unsigned int i_Breite;
    unsigned int i_Hoehe;
    unsigned int i_Tiefe;
    unsigned int i_radius;
    unsigned int i_seite1;
    unsigned int i_seite2;
    unsigned int i_seite3;
    
    long double d_pi = 3.14159265358979323;
    
    
    unsigned int i_ergebnis1;

    cout << "----------------------------------------------------------------" << endl;
    
    do
    {

    cout << "Um welche geometrische Form handelt es sich?" << endl;
    cout << "'R' für Rechteck, 'D' für Dreieck, 'K' für Kreis, 'Q' für Quader, 'Z' für Zylinder, 'X' für Kugel" << endl;
    cin >> c_Form;
    
    // Rechteck
    
    if ((c_Form == 'R') || (c_Form == 'r'))
    {
        cout << "Gewählte Form: Rechteck" << endl;
        cout << "Welche geometrische Größe soll ermittelt werden?" << endl;
        cout << "'F' für Flächeninhalt, 'U' für Umfang" << endl;
        cin >> c_Groesse;
        
        if ((c_Groesse == 'F') || (c_Groesse == 'f'))
        {
            cout << "Gewählte Größe: Flächeninhalt" << endl;
            cout << "Geben Sie nun die Länge des Rechtecks (in cm) ein." << endl;
            cin >> i_Laenge;
            cout << "Geben Sie nun die Breite des Rechtecks (in cm) ein." << endl;
            cin >> i_Breite;
            
            i_ergebnis1 = i_Laenge * i_Breite;
            
            cout << "----------------------------------------------------------------" << endl;
            cout << "Der Flächeninhalt des Rechtecks beträgt " << i_ergebnis1 << " Quadratzentimeter (cm2). " << endl;
            cout << "----------------------------------------------------------------" << endl;
        }
        else if ((c_Groesse == 'U') || (c_Groesse == 'u'))
        {
            cout << "Gewählte Größe: Umfang" << endl;
            cout << "Geben Sie nun die Länge des Rechtecks (in cm) ein." << endl;
            cin >> i_Laenge;
            cout << "Geben Sie nun die Breite des Rechtecks (in cm) ein." << endl;
            cin >> i_Breite;
            
            i_ergebnis1 = 2 * i_Laenge + 2 * i_Breite;
            
            cout << "----------------------------------------------------------------" << endl;
            cout << "Der Umfang des Rechtecks beträgt " << i_ergebnis1 << " Zentimeter (cm). " << endl;
            cout << "----------------------------------------------------------------" << endl;
        }
        
    }
    
    // Dreieck
    
    else if ((c_Form == 'D') || (c_Form == 'd'))
    {
        cout << "Gewählte Form: Dreieck" << endl;
        cout << "Welche geometrische Größe soll ermittelt werden?" << endl;
        cout << "'F' für Flächeninhalt, 'U' für Umfang" << endl;
        cin >> c_Groesse;
        
        if ((c_Groesse == 'F') || (c_Groesse == 'f'))
        {
            cout << "Gewählte Größe: Flächeninhalt" << endl;
            cout << "Geben Sie nun die Breite des Dreiecks (in cm) ein." << endl;
            cin >> i_Breite;
            cout << "Geben Sie nun die Höhe des Dreiecks (in cm) ein." << endl;
            cin >> i_Hoehe;
            
            i_ergebnis1 = 0.5 * i_Breite * i_Hoehe;
            
            cout << "----------------------------------------------------------------" << endl;
            cout << "Der Flächeninhalt des Dreiecks beträgt " << i_ergebnis1 << " Quadratzentimeter (cm2)." << endl;
            cout << "----------------------------------------------------------------" << endl;
        }
        else if ((c_Groesse == 'U') || (c_Groesse == 'u'))
        {
            cout << "Gewählte Größe: Umfang" << endl;
            cout << "Geben Sie nun die Länge der 1. Seite des Dreiecks (in cm) ein." << endl;
            cin >> i_seite1;
            cout << "Geben Sie nun die Länge der 2. Seite des Dreiecks (in cm) ein." << endl;
            cin >> i_seite2;
            cout << "Geben Sie nun die Länge der 3. Seite des Dreiecks (in cm) ein." << endl;
            cin >> i_seite3;
            
            i_ergebnis1 = i_seite1 + i_seite2 + i_seite3;
            
            cout << "----------------------------------------------------------------" << endl;
            cout << "Der Umfang des Dreiecks beträgt " << i_ergebnis1 << " Zentimeter (cm)." << endl;
            cout << "----------------------------------------------------------------" << endl;
        }
        
        // Kreis
        
    }
    else if ((c_Form == 'K') || (c_Form == 'k'))
    {
        cout << "Gewählte Form: Kreis" << endl;
        cout << "Welche geometrische Größe soll ermittelt werden?" << endl;
        cout << "'F' für Flächeninhalt, 'U' für Umfang" << endl;
        cin >> c_Groesse;
        
        if ((c_Groesse == 'F') || (c_Groesse == 'f'))
        {
            cout << "Gewählte Größe: Flächeninhalt" << endl;
            cout << "Geben Sie nun den Radius des Kreises (in cm) ein." << endl;
            cin >> i_radius;
            
            i_ergebnis1 = (i_radius * i_radius) * d_pi;
            
            cout << "----------------------------------------------------------------" << endl;
            cout << "Der Flächeninhalt des Kreises beträgt " << i_ergebnis1 << " Quadratzentimeter (cm2)." << endl;
            cout << "----------------------------------------------------------------" << endl;
        }
        else if ((c_Groesse == 'U') || (c_Groesse == 'u'))
        {
            cout << "Gewählte Größe: Umfang" << endl;
            cout << "Geben Sie nun den Radius des Kreises (in cm) ein." << endl;
            cin >> i_radius;
            
            i_ergebnis1 = 2 * i_radius * d_pi;
            
            cout << "----------------------------------------------------------------" << endl;
            cout << "Der Umfang des Kreises beträgt " << i_ergebnis1 << " Zentimeter (cm)." << endl;
            cout << "----------------------------------------------------------------" << endl;
        }
        
    }
    
    // Quader
    
    else if ((c_Form == 'Q') || (c_Form == 'q'))
    {
        cout << "Gewählte Form: Quader" << endl;
        cout << "Welche geometrische Größe soll ermittelt werden?" << endl;
        cout << "'V' für Volumen, 'O' für Oberflächeninhalt" << endl;
        cin >> c_Groesse;
        
        if ((c_Groesse == 'V') || (c_Groesse == 'v'))
        {
            cout << "Gewählte Größe: Volumen" << endl;
            cout << "Geben Sie nun die Breite des Quaders (in cm) ein." << endl;
            cin >> i_Breite;
            cout << "Geben Sie nun die Tiefe des Quaders (in cm) ein." << endl;
            cin >> i_Tiefe;
            cout << "Geben Sie nun die Höhe des Quaders (in cm) ein." << endl;
            cin >> i_Hoehe;
            
            i_ergebnis1 = (i_Breite * i_Tiefe) * i_Hoehe;
            
            cout << "----------------------------------------------------------------" << endl;
            cout << "Das Volumen des Quaders beträgt " << i_ergebnis1 << " Kubikzentimeter (cm3)." << endl;
            cout << "----------------------------------------------------------------" << endl;
        }
        else if ((c_Groesse == 'O') || (c_Groesse == 'o'))
        {
            cout << "Gewählte Größe: Oberflächeninhalt" << endl;
            cout << "Geben Sie nun die Breite des Quaders (in cm) ein." << endl;
            cin >> i_Breite;
            cout << "Geben Sie nun die Tiefe des Quaders (in cm) ein." << endl;
            cin >> i_Tiefe;
            cout << "Geben Sie nun die Höhe des Quaders (in cm) ein." << endl;
            cin >> i_Hoehe;
            
            i_ergebnis1 = (2 * i_Breite * i_Tiefe) + (2 * i_Breite * i_Hoehe) + (2 * i_Tiefe * i_Hoehe);
            
            cout << "----------------------------------------------------------------" << endl;
            cout << "Der Oberflächeninhalt des Quaders beträgt " << i_ergebnis1 << " Quadratzentimeter (cm2)." << endl;
            cout << "----------------------------------------------------------------" << endl;
        }
    }
    
    
    // Zylinder
    
    else if ((c_Form == 'Z') || (c_Form == 'z'))
    {
        cout << "Gewählte Form: Zylinder" << endl;
        cout << "Welche geometrische Größe soll ermittelt werden?" << endl;
        cout << "'V' für Volumen, 'O' für Oberflächeninhalt" << endl;
        cin >> c_Groesse;
        
        if ((c_Groesse == 'V') || (c_Groesse == 'v'))
        {
            cout << "Gewählte Größe: Volumen" << endl;
            cout << "Geben Sie nun den Radius des Zylinders (in cm) ein." << endl;
            cin >> i_radius;
            cout << "Geben Sie nun die Höhe des Zylinders (in cm) ein." << endl;
            cin >> i_Hoehe;
            
            i_ergebnis1 = d_pi * (i_radius * i_radius) * i_Hoehe;
            
            cout << "----------------------------------------------------------------" << endl;
            cout << "Das Volumen des Zylinders beträgt " << i_ergebnis1 << " Kubikzentimeter (cm3)." << endl;
            cout << "----------------------------------------------------------------" << endl;
        }
        else if ((c_Groesse == 'O') || (c_Groesse == 'o'))
        {
            cout << "Gewählte Größe: Oberflächeninhalt" << endl;
            cout << "Geben Sie nun den Radius des Zylinders (in cm) ein." << endl;
            cin >> i_radius;
            cout << "Geben Sie nun die Höhe des Zylinders (in cm) ein." << endl;
            cin >> i_Hoehe;
            
            i_ergebnis1 = 2 * d_pi * i_radius * (i_radius + i_Hoehe);
            
            cout << "----------------------------------------------------------------" << endl;
            cout << "Der Oberflächeninhalt des Zylinders beträgt " << i_ergebnis1 << " Quadratzentimeter (cm2)." << endl;
            cout << "----------------------------------------------------------------" << endl;
        }
        
    }
    
    
    // Kugel
    
    else if ((c_Form == 'X') || (c_Form == 'x'))
    {
        cout << "Gewählte Form: Kugel" << endl;
        cout << "Welche geometrische Größe soll ermittelt werden?" << endl;
        cout << "'V' für Volumen, 'O' für Oberflächeninhalt" << endl;
        cin >> c_Groesse;
        
        if ((c_Groesse == 'V') || (c_Groesse == 'v'))
        {
            cout << "Gewählte Größe: Volumen" << endl;
            cout << "Geben Sie nun den Radius der Kugel (in cm) ein." << endl;
            cin >> i_radius;
            
            i_ergebnis1 = 1.333 * d_pi * (i_radius * i_radius * i_radius);
            
            cout << "----------------------------------------------------------------" << endl;
            cout << "Das Volumen der Kugel beträgt " << i_ergebnis1 << " Kubikzentimeter (cm3)." << endl;
            cout << "----------------------------------------------------------------" << endl;
        }
        else if ((c_Groesse == 'O') || (c_Groesse == 'o'))
        {
            cout << "Gewählte Größe: Oberflächeninhalt" << endl;
            cout << "Geben Sie nun den Radius der Kugel (in cm) ein." << endl;
            cin >> i_radius;
            
            i_ergebnis1 = 4 * d_pi * (i_radius * i_radius);
            
            cout << "----------------------------------------------------------------" << endl;
            cout << "Der Oberflächeninhalt der Kugel beträgt " << i_ergebnis1 << " Quadratzentimeter (cm2)." << endl;
            cout << "----------------------------------------------------------------" << endl;
        }
        
    }
    
    
    else
    {
        cout << "----------------------------------------------------------------" << endl;
        cout << "Eingabe undeutlich, bitte wiederholen." << endl;
        cout << "----------------------------------------------------------------" << endl;
    }
    
    // cout << "'F' für Flaecheninhalt, 'U' für"
    } while (1);
}


