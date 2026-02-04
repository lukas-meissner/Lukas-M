#include <stdio.h>

int main(void) {
    // Variablen
    char shipClass[50];
    int crewCount;
    int missionDays;

    long long distanceKm = 187654321098LL;
    double warpPercentage = 82.7;
    double currentRange = 12.456;

    // Benutzereingaben
    printf("Bitte geben Sie die Klasse des Schiffs ein: ");
    fgets(shipClass, sizeof(shipClass), stdin);

    printf("Bitte geben Sie die Anzahl der Crew ein: ");
    scanf("%d", &crewCount);

    printf("Bitte geben Sie die Anzahl der Missionstage ein: ");
    scanf("%d", &missionDays);

    // Ausgabe
    printf("\n%-45s %-20s\n", "Name", "Value");
    printf("---------------------------------------------------------------\n");

    printf("%-45s %-20s", "Klasse des Schiffs", shipClass);
    printf("%-45s %-20d\n", "Anzahl der Crew", crewCount);
    printf("%-45s %-20d\n", "Anzahl der Missionstage", missionDays);
    printf("%-45s %-20lld\n", "Zurückgelegte Kilometer", distanceKm);
    printf("%-45s %-19.1f%%\n", "Anteil in Lichtgeschwindigkeit", warpPercentage);
    printf("%-45s %-20.3f\n", "Aktuelle Reichweite", currentRange);

    return 0;
}
