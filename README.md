# Datenbanken

## Vokabular
Bevor der Weg hin zu einer Datenbank genauer dargelegt wird, werden zunächst die wichtigsten Begriffe kurz definiert.

##### Entität und Entitätstyp

Eine Entität ist ein Objekt aus der realen Welt. Eine Entität ist in einer Datenbank eine Zeile einer Tabelle. 
Ein Entitätstyp ist hingegen eine Zusammenfassung von vielen Entitäten mit gleichen Eigenschaften/Attributen. In einer Datenbank bildet jeder Entitätstyp eine Tabelle ab. 

##### Relation und Relationstyp

Eine Relation stellt die Beziehung zwischen 2 Entitäten dar. 
Z. B. "Max arbeitet bei Autoteile AG" (Die Relation "arbeiten" stellt die Beziehung der beiden Entitäten (Max und Autoteile AG) dar).

Ein Relationstyp stellt die Beziehung zwischen 2 Entitätstypen dar.
Z. B. "Ein Kzf-Mechatroniker arbeitet in einer Werkstatt" (Der Relationstyp "arbeiten" stellt die Beziehung der beiden Entitätstypen (Kfz-Mechatroniker und Werkstatt) dar).

##### Attribut

Entitäten bzw. Entitätstypen sowie Relationen bzw. Relationstypen haben bestimmte Eigenschaften, welche Attribute genannt werden (Attribut = Spalte einer Tabelle).

##### Kardinalitäten 

Kardinalitäten geben an wie viele Entitäten eines Entitätstypen mit einer Entität eines anderen Entitätstypen in Beziehung stehen können. 
Folgende Arten von Kardinalitäten gibt es (Min-Max-Notation):
- (1,1) : (1,1)- Beziehung
- (0,1) : (1,1)- Beziehung
- (0,n) : (1,1)- Beziehung
- (0,n) : (0,m)- Beziehung

##### Primärschlüssel

Der Primärschlüssel ist eine Eigenschaft eines Entitätstypen, welche eine Entität eindeutig identifizieren kann. Er kann aus einem aber auch aus mehreren Attributen bestehen. 

##### Fremdschlüssel 

Ein Fremdschlüssel ist ein Attribut eines Entitätstypen, welches den Primärschlüssel eines anderen Entitätstypen abbildet.

#### Generalisierung und Spezialisierung
Bei der Generalisierung und Spezialisierung gibt es die Dimension Vollständigkeit, welche in Partiell (P) und Total (T) aufgeteilt wird und die Dimension Zerlegung, welche in Disjunkt (D) und Nicht Disjunkt (N) aufgeteilt wird.  
Die Vollständigkeit gibt an, ob es neben den abgebildeten Gruppen noch weitere Gruppen gibt (P) oder ob alle Gruppen zu sehen sind (T).  
Die Zerlegung gibt an, ob die abgebildeten Gruppen Schnittmengen miteinander haben (N) oder nicht (D).

#### Anomalien
Eine Anomalie bezeichnet das Fehlverhalten einer Datenbank.
##### Update-Anomalie
Das Ändern von Daten in einer Datenbank führt zu einer Uppdate-Anomalie, wenn nicht alle redundanten Vorkommen eines Attributwertes entsprechend geändert werden. Dies führt zu inkonsistenten Daten.
##### Insert-Anomalie
Das Einfügen von Daten in einer Datenbank führt zu einer Insert-Anomalie, wenn das neue Tupel nicht oder nur schwierig in die betroffene Relation eingefügt werden kann.
##### Delete-Anomalie
Das Löschen von Daten aus einer Datenbank führt zu einer Delete-Anomalie, wenn dadurch mehr Informationen verloren gehen als gewollt.

#### Normalisierung
Normalisierung ist die schreitweise Zerlegung von Relationen in mehrere Relationen auf Grundlage von funktionaler Abhängigkeiten.
##### 1. Normalform
Eine Relation befindet sich in erster Normalform, wenn alle Attributsausprägungen atomar und die Relation frei von Wiederholungsgruppen ist.
##### 2. Normalform
Eine Relation befindet sich in zweiter Normalenform, wenn sie sich in erster Normalform befindet und alle Nichtschlüsselattributevollfunktional vom Primärschlüssel abhängen.
##### 3. Normalform
Eine Relation befindet sich in dritter Normalform, wenn sie sich in zweiter Normalform befindet und kein Nichtschlüsselattribut transitiv vom Primärschlüssel abhängig ist.
Transitive Abhängigkeit bedeutet indirekte Abhängigkeit vom Primärschlüssel über andere Nichtschlüsselattribute.


## Entity-Relationship-Modell (ERM)

Ein ERM ist eine Diagrammart, welche Datenbanken abbildet. Genauer gesagt sind in einem ERM die Beziehungen (in Rauten) der einzelnen Entitätstypen (in Rechtecken) abgebildet. Für das genauere Abbild der Datenbank werden die Kardinalitäten an den Seiten hinzugefügt. Zudem sind auch die Attribute (in ovalen) ersichtlich. Bei den Attributen wird der Primärschlüssel immer unterstrichen.

#### Beispiel ERM
[Beispiel ERM](https://github.com/JoBo33/Datenbanken/blob/main/Anwendungsscreenshots%20und%20ERM/ERM.pdf "Beispiel ERM")

Lesen kann man das Diagramm bspw. wie Folgt:  
Ein Kunde besitzt ein oder mehrere Fahrzeuge. 
Ein Fahrzeug gehört zu genau einem Kunden.

## Normalisierung 

###### Ausgangsdatenbank: 
![Ausgangsdatanbank](https://github.com/JoBo33/Datenbanken/blob/main/Anwendungsscreenshots%20und%20ERM/Ausgangsdatenbank.png "Ausgangsdatenbank")


###### 1. Normalform

Im Vergleich zu der Ausgangsdatenbank wurde das Attribut Adresse aufgespalten in Ort, Plz, Straße und Hnr. Zudem gibt es nun keine doppelten Einträge in einer Spalte mehr (eine Zeile für den Kombi eine Zeile für den SUV).

![1. NF](https://github.com/JoBo33/Datenbanken/blob/main/Anwendungsscreenshots%20und%20ERM/1.%20NF.png "1. NF")

###### 2. Normalform

In der zweiten Normalform wird die Gesamttabelle in viele kleinere Tabellen aufgeteilt, damit die einzelnen Attribute von dem Primärschlüssel abhängen. 

![2. NF](https://github.com/JoBo33/Datenbanken/blob/main/Anwendungsscreenshots%20und%20ERM/2.%20NF%20(Fahrzeug).png "2. NF Tabelle Fahrzeug")

![2. NF](https://github.com/JoBo33/Datenbanken/blob/main/Anwendungsscreenshots%20und%20ERM/2.%20NF%20(Kunde).png "2. NF Tabelle Kunde")

![2. NF](https://github.com/JoBo33/Datenbanken/blob/main/Anwendungsscreenshots%20und%20ERM/2.%20NF%20(Material).png "2. NF Tabelle Material")

![2. NF](https://github.com/JoBo33/Datenbanken/blob/main/Anwendungsscreenshots%20und%20ERM/2.%20NF%20(Mitarbeiter).png "2. NF Tabelle Mitarbeiter")

![2. NF](https://github.com/JoBo33/Datenbanken/blob/main/Anwendungsscreenshots%20und%20ERM/2.%20NF%20(Reperatur).png "2. NF Tabelle Reperatur")

![2. NF](https://github.com/JoBo33/Datenbanken/blob/main/Anwendungsscreenshots%20und%20ERM/2.%20NF%20(Verbrauch).png "2. NF Tabelle Verbrauch")

![2. NF](https://github.com/JoBo33/Datenbanken/blob/main/Anwendungsscreenshots%20und%20ERM/2.%20NF%20(Werkstatt).png "2. NF Tabelle Werkstatt")

###### 3. Normalform

Nun werden auch transitive Abhängigkeiten beseitigt. Z. B. wird hängt das Attribut Ort von der Plz ab. Dadurch entsteht die Tabelle Stadt mit den Attributen Plz (Primärschlüssel) und Ort.

![3. NF](https://github.com/JoBo33/Datenbanken/blob/main/Anwendungsscreenshots%20und%20ERM/3.%20NF%20(Stadt).png "3. NF Tabelle Stadt")

![3. NF](https://github.com/JoBo33/Datenbanken/blob/main/Anwendungsscreenshots%20und%20ERM/3.%20NF%20(Fahrzeug).png "3. NF Tabelle Fahrzeug")

![3. NF](https://github.com/JoBo33/Datenbanken/blob/main/Anwendungsscreenshots%20und%20ERM/3.%20NF%20(Geschäftskunde).png "3. NF Tabelle Geschäftskunde")

![3. NF](https://github.com/JoBo33/Datenbanken/blob/main/Anwendungsscreenshots%20und%20ERM/3.%20NF%20(Privatkunde).png "3. NF Tabelle Privatkunde")

![3. NF](https://github.com/JoBo33/Datenbanken/blob/main/Anwendungsscreenshots%20und%20ERM/3.%20NF%20(Kunde).png "3. NF Tabelle Kunde")

![3. NF](https://github.com/JoBo33/Datenbanken/blob/main/Anwendungsscreenshots%20und%20ERM/3.%20NF%20(Reperatur).png "3. NF Tabelle Reperatur")

![3. NF](https://github.com/JoBo33/Datenbanken/blob/main/Anwendungsscreenshots%20und%20ERM/3.%20NF%20(Zubehör).png "3. NF Tabelle Zubehör")

![3. NF](https://github.com/JoBo33/Datenbanken/blob/main/Anwendungsscreenshots%20und%20ERM/3.%20NF%20(ersatzteile).png "3. NF Tabelle Erstatzteile")

![3. NF](https://github.com/JoBo33/Datenbanken/blob/main/Anwendungsscreenshots%20und%20ERM/3.%20NF%20(Flüssigkeiten).png "3. NF Tabelle Flüssigkeiten")

![3. NF](https://github.com/JoBo33/Datenbanken/blob/main/Anwendungsscreenshots%20und%20ERM/3.%20NF%20(Material).png "3. NF Tabelle Material")

![3. NF](https://github.com/JoBo33/Datenbanken/blob/main/Anwendungsscreenshots%20und%20ERM/3.%20NF%20(Verbrauch).png "3. NF Tabelle Verbrauch")

![3. NF](https://github.com/JoBo33/Datenbanken/blob/main/Anwendungsscreenshots%20und%20ERM/3.%20NF%20(Werkstatt).png "3. NF Tabelle Werkstatt")

![3. NF](https://github.com/JoBo33/Datenbanken/blob/main/Anwendungsscreenshots%20und%20ERM/3.%20NF%20(Geselle).png "3. NF Tabelle Geselle")

![3. NF](https://github.com/JoBo33/Datenbanken/blob/main/Anwendungsscreenshots%20und%20ERM/3.%20NF%20(Meister).png "3. NF Tabelle Meister")

![3. NF](https://github.com/JoBo33/Datenbanken/blob/main/Anwendungsscreenshots%20und%20ERM/3.%20NF%20(Mitarbeiter).png "3. NF Tabelle Mitarbeiter")

##### SQL-Code des Anwendungsbeispiels
[SQL-Code](https://github.com/JoBo33/Datenbanken/blob/main/Anwendungsscreenshots%20und%20ERM/Normalisierung%20einer%20Datenbank%20Beispiel%20(Code).pdf)
