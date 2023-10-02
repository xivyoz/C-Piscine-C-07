# Piscine C - C 07

Ce document est le sujet du module C 07 de la piscine C de 42, version 4.3.

## Table des matières
1. [Consignes](#consignes)
2. [Préambule](#préambule)
3. [Exercice 00 : ft_strdup](#exercice-00--ft_strdup)
4. [Exercice 01 : ft_range](#exercice-01--ft_range)
5. [Exercice 02 : ft_ultimate_range](#exercice-02--ft_ultimate_range)

## Consignes
- Seule cette page servira de référence : ne vous fiez pas aux bruits de couloir.
- Relisez bien le sujet avant de rendre vos exercices. À tout moment le sujet peut changer.
- Attention aux droits de vos fichiers et de vos répertoires.
- Vous devez suivre la procédure de rendu pour tous vos exercices.
- Vos exercices seront corrigés par vos camarades de piscine.
- En plus de vos camarades, vous serez corrigés par un programme appelé la Moulinette.
- La Moulinette est très stricte dans sa notation. Elle est totalement automatisée. Il est impossible de discuter de sa note avec elle. Soyez d’une rigueur irréprochable pour éviter les surprises.
- La Moulinette n’est pas très ouverte d’esprit. Elle ne cherche pas à comprendre le code qui ne respecte pas la Norme. La Moulinette utilise le programme norminette pour vérifier la norme de vos fichiers. Comprenez par là qu'il est stupide de rendre un code qui ne passe pas la norminette.
- Les exercices sont très précisément ordonnés du plus simple au plus complexe. En aucun cas nous ne porterons attention ni ne prendrons en compte un exercice complexe si un exercice plus simple n’est pas parfaitement réussi.
- L’utilisation d’une fonction interdite est un cas de triche. Toute triche est sanctionnée par la note de -42.
- Vous ne devrez rendre une fonction main() que si nous vous demandons un programme.
- La Moulinette compile avec les flags -Wall -Wextra -Werror, et utilise cc.
- Si votre programme ne compile pas, vous aurez 0.
- Vous ne devez laisser dans votre répertoire aucun autre fichier que ceux explicitement spécifiés par les énoncés des exercices.
- Vous avez une question ? Demandez à votre voisin de droite. Sinon, essayez avec votre voisin de gauche.
- Votre manuel de référence s’appelle Google / man / Internet / ....
- Pensez à discuter sur le forum Piscine de votre Intra, ainsi que sur le slack de votre Piscine !
- Lisez attentivement les exemples. Ils pourraient bien requérir des choses qui ne sont pas autrement précisées dans le sujet...
- Réfléchissez. Par pitié, par Odin ! Nom d’une pipe. Pour cette journée, la norminette doit être lancée avec le flag -R CheckForbiddenSourceHeader. La Moulinette l’utilisera aussi.

## Préambule
Voici une liste des monstres que l’on peut trouver dans le célèbre Donjon de Naheulbeuk :
- Toutes sortes de morts-vivants ;
- Des araignées géantes ;
- Des orques ;
- Des gobelins ;
- Des trolls dans les souterrains ;
- Des sorciers ;
- Des guerriers maudits ;
- Des rats mutants ;
- Une bouteille d’huile ;
- Du papier toilette ;
- Deux éponges ;
- Des raviolis.

## Exercice 00 : ft_strdup
Dossier de rendu : ex00/
Fichiers à rendre : ft_strdup.c
Fonctions Autorisées : malloc

- Reproduire à l’identique le fonctionnement de la fonction `strdup` (man strdup).
- Elle devra être prototypée de la façon suivante :
  ```c
  char *ft_strdup(char *src);

# Exercice 01 : ft_range

Dans cet exercice, vous devrez écrire une fonction `ft_range` qui retourne un tableau d'entiers. Ce tableau doit contenir toutes les valeurs entre `min` (inclus) et `max` (exclus).

## Prototype
  ```c
  int *ft_range(int min, int max);

# Exercice 02 : ft_ultimate_range

## Description
Dans cet exercice, vous devrez implémenter la fonction `ft_ultimate_range` qui alloue et assigne un tableau d'entiers. Ce tableau doit contenir toutes les valeurs entre `min` (inclus) et `max` (exclus).

## Prototype
  ```c
  int ft_ultimate_range(int **range, int min, int max);

**Note :** Assurez-vous de bien nommer vos fichiers et répertoires conformément aux exigences du sujet et de suivre les consignes de rendu.
