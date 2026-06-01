#include <iostream>   
#include <cmath>      

/*
    Part 1 Basic Class
*/

class Vector2D 
{
private:
    double x;  
    double y;  

public:
    // Default-Konstruktor:
    Vector2D() : x(0.0), y(0.0) {}

    // Parameterierter Konstruktor: 
    Vector2D(double x, double y) : x(x), y(y) {}

    // Getter für x-Komponente:
    double getX() const { return x; }

    // Getter für y-Komponente:
    double getY() const { return y; }

    void print() const 
    {
        std::cout << "(" << x << ", " << y << ")\n";
    }

    /* 
        Part 2 Function Overload
    */

    double length() const 
    {
        return std::sqrt(x * x + y * y);
    }

    // Overloading
    double length(int precision) const 
    {
        double value  = std::sqrt(x * x + y * y);   // genauer Wert
        double factor = std::pow(10.0, precision);   // z.B. precision=2 → factor=100
        return std::round(value * factor) / factor;  // runden auf Stellen
    }

    /*
        Part 3 – Operator Overloading 
    */

    // operator+ als Member-Funktion:
    //   Gibt NEUES Objekt zurück (links + rechts); verändert *this nicht
    //   'const' nach der Parameterliste → this wird nicht verändert
    Vector2D operator+(const Vector2D& other) const 
    {
        return Vector2D(x + other.x, y + other.y);
    }

    // operator+= als Member-Funktion:
    //   Addiert 'other' zum aktuellen Objekt (modifiziert *this)
    //   Gibt Referenz auf sich selbst zurück → ermöglicht Verkettung: a += b += c
    Vector2D& operator+=(const Vector2D& other) 
    {
        x += other.x;
        y += other.y;
        return *this;  
    }

    // operator* (Vektor * Skalar) als Member-Funktion:
    //   Gibt neues skaliertes Objekt zurück; verändert *this nicht
    Vector2D operator*(double scalar) const 
    {
        return Vector2D(x * scalar, y * scalar);
    }
};

Vector2D operator*(double scalar, const Vector2D& v) 
{
    // Delegiert einfach an die bereits implementierte Member-Version
    return v * scalar;
}


std::ostream& operator<<(std::ostream& os, const Vector2D& v) 
{
    os << "(" << v.getX() << ", " << v.getY() << ")";
    return os;
}

int main() {
    // ---- Part 1: Konstruktoren, Getter, print ----
    Vector2D v1;           // Default: (0, 0)
    Vector2D v2(3.0, 4.0); // Parameterisiert: (3, 4)

    std::cout << "=== Part 1 ===\n";
    v1.print();            
    v2.print();           
    std::cout << "x=" << v2.getX() << "  y=" << v2.getY() << "\n";

    // ---- Part 2: Function Overloading – Betrag ----
    std::cout << "\n=== Part 2 ===\n";
    std::cout << "Exakter Betrag: "    << v2.length()    << "\n";
    std::cout << "Gerundet (2 Dez.): " << v2.length(2)   << "\n";

    Vector2D v3(1.0, 2.0); 
    std::cout << "Exakter Betrag v3: " << v3.length()    << "\n";
    std::cout << "Gerundet auf 3: "    << v3.length(3)   << "\n";

    // Part 3
    std::cout << "\n=== Part 3 ===\n";

    // operator+ → neues Objekt, v2 und v3 unverändert
    Vector2D summe = v2 + v3;
    std::cout << "v2 + v3 = " << summe << "\n";        // (4, 6)

    // operator+= → v2 wird verändert
    Vector2D v4(1.0, 1.0);
    v4 += v2;
    std::cout << "v4 += v2 → v4 = " << v4 << "\n";    // (4, 5)

    // operator* Vektor * Skalar
    Vector2D skaliert = v2 * 2.0;
    std::cout << "v2 * 2.0 = " << skaliert << "\n";   // (6, 8)

    // operator* Skalar * Vektor (freie Funktion)
    Vector2D skaliert2 = 3.0 * v2;
    std::cout << "3.0 * v2 = " << skaliert2 << "\n";  // (9, 12)

    // operator<< direkt mit cout
    std::cout << "v2 direkt via <<: " << v2 << "\n";

    return 0; // Programm erfolgreich beendet
}