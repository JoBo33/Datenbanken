# Datenbanken

## Vokabular
Bevor der Weg hin zu einer Datenbank genauer dargelegt wird, werden zunächst die wichtigsten Begriffe kurz definiert.

##### Entität und Entitätstyp

Eine Entität ist ein Objekt aus der realen Welt. Ein Entität ist in einer Datenbank eine Zeile einer Tabelle. 
Ein Entitätstyp ist hingegen eine Zusammenfassung von vielen Entitätstypen mit gleichen Eigenschaften/Attributen. In einer Datenbank bildet jede Entität eine Tabelle ab. 

##### Relation und Relationstyp

Eine Relation stellt die Beziehung zwischen 2 Entitäten dar. 
Z. B. "Max arbeitet bei Autoteile AG" (Die Relation "arbeiten" stellt die Beziehung der beiden Entitäten (Max und Autoteile AG) dar).

Ein Relationstyp stellt die Beziehung zwischen 2 Entitätstypen dar.
Z. B. "Kzf-Mechatroniker arbeitet in einer Werkstatt" (Der Relationstyp "arbeiten" stellt die Beziehung der beiden Entitätstypen (Kfz-Mechatroniker und Werkstatt) dar).

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

Der Primärschlüssel ist eine Eigenschaft eines Entitätstypen, welche eine Entität eindeutig identifizieren kann. 

##### Fremdschlüssel 

Ein Fremdschlüssel ist ein Attribut eines Entitätstypen, welches den Primärschlüssel eines anderen Entitätstypen abbildet.

#### Generalisierung und Spezialisierung


#### Anomalien
Eine Anomalie bezeichnet das Fehlverhalten einer Datenbank.
##### Update-Anomalie
Das Ändern von Daten in einer Datenbank führt zu einer Uppdate-Anomalie, wenn nicht alle redundanten Vorkommen eines Attributwertes euntsprechend geändert werden. Dieses führt zu inkonsistenten Daten.
##### Insert-Anomalie
Das Einfügen von Daten in einer Datenbank führt zu einer Insert-Anomalie, wenn das neue Tupel nicht oder nur schwierig in die betroffene Relationeingefügt werden kann.
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


























