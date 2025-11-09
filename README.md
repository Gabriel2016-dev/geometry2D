# Projet Geometry 2D - Points et Vecteurs

## Description

Ce projet est une petite bibliothèque en **C++** permettant de manipuler des **points et vecteurs 2D** (`Point2f` et `Vector2f`) et d'effectuer des opérations géométriques de base telles que :

- Translation de points
- Mise à l’échelle (scaling)
- Rotation
- Calculs vectoriels : addition, soustraction, produit scalaire, normalisation, interpolation linéaire (Lerp), déterminant
- Conversion point → vecteur

Le projet inclut également un fichier **`utils.h`** fournissant des fonctions génériques pour afficher des objets dans la console de manière lisible.

---

## Arborescence du projet

```
Devoir/
├── main.cpp # Programme principal de test
├── geometry/
│ ├── point.h # Déclaration du type Point2f et fonctions associées
│ ├── point.cpp # Définition des fonctions Point2f
│ ├── vector.h # Déclaration du type Vector2f et fonctions associées
│ ├── vector.cpp # Définition des fonctions Vector2f
│ └── utils.h # Fonctions utilitaires pour affichage
└── README.md
```

---

## Fichiers principaux

### `point.h` / `point.cpp`

- **Struct `Point2f`** : représente un point 2D `(x, y)`  
- Fonctions principales :
  - `MakeP2f(x, y)` : création d’un point
  - `Translate(point, dx, dy)` ou `Translate(point, vector)` : translation
  - `Scale(point, sx, sy)` ou `Scale(point, vector)` : mise à l’échelle
  - `Rotate(point, angleDegree)` : rotation autour de l’origine
  - `ToString(point)` : représentation texte pour affichage

### `vector.h` / `vector.cpp`

- **Struct `Vector2f`** : représente un vecteur 2D `(x, y)`  
- Fonctions principales :
  - `MakeV2f(x, y)` : création d’un vecteur
  - `MakeV2f(pointA, pointB)` : vecteur de `A → B`
  - `Add`, `Sub` : addition et soustraction de vecteurs
  - `Scale` : multiplication par un scalaire
  - `Dot` : produit scalaire
  - `Length` : norme du vecteur
  - `Normalize` : vecteur unitaire
  - `Lerp(a, b, t)` : interpolation linéaire
  - `Determinant` : déterminant 2D
  - `ToString(vector)` : représentation texte

### `utils.h`

- Fonctions génériques pour affichage :
  - `ToString(value)` pour types simples
  - `ToString(vector<T>)` pour vecteurs
  - `ToString(map<K,V>)` pour dictionnaires
  - `Print(...)` pour afficher plusieurs valeurs dans la console

---

## Compilation et exécution

### Avec g++

Ouvrir le terminal dans le dossier `Devoir` et exécuter :

```bash
g++ main.cpp geometry/point.cpp geometry/vector.cpp -o app
```

Puis lancer le programme :

```bash
app.exe
```
En cas d'absence de complilateur C++ (g++) un `app.exe` vous est fourni pour test.

Le programme affichera des tests de toutes les fonctions sur la console.

---

## Exemple de sortie console

```
=== Point2f Tests ===
Original point: (2, 3)
Translated by (1, -1): (3, 2)
Translated by vector (2,3): (4, 6)
Scaled by (2,0.5): (4, 1.5)
Scaled by vector (2,3): (4, 9)
Rotated 90 degrees: (-3, 2)
Rotated 45 degrees: (-0.707107, 3.53553)

=== Vector2f Tests ===
v1: (1, 2)
v2: (3, 4)
v1 + v2: (4, 6)
v1 - v2: (-2, -2)
v1 scaled by 3: (3, 6)
Dot product v1·v2: 11
Length of v1: 2.23607
Normalized v1: (0.447214, 0.894427)
Lerp v1->v2 (t=0.5): (2, 3)
Determinant of v1 and v2: -2

=== Point <-> Vector Tests ===
Vector from p to pTrans: (1, -1)
```

---

## Notes importantes

Les headers utilisent des forward declarations pour éviter les dépendances circulaires entre point.h et vector.h.

Tous les calculs sont en float pour plus de simplicité et performance.

La rotation est autour de l’origine (0,0) et se fait en degrés.

---

## Auteur

Projet réalisé par SADJIFILE GABRIEL SEVAN.

Date : Novembre 2025

---

## Licence

Ce projet est libre de droits pour usage pédagogique et expérimental.
