# Exercices en C : Vérification de l'Âge et Classification d'un Triangle  

## Exercice 1 : Vérification de l’Âge  

### **Énoncé**  
Écrire un programme qui demande à l’utilisateur son âge et affiche un message en fonction de son groupe d'âge :  
- **Moins de 18 ans** → `"Vous êtes mineur."`  
- **Entre 18 et 60 ans** → `"Vous êtes adulte."`  
- **Plus de 60 ans** → `"Vous êtes senior."`  

### **Instructions**  
1. Demander à l’utilisateur de saisir son âge.  
2. Utiliser des structures conditionnelles pour déterminer le message à afficher.  

### **Exemple d’Exécution**  
```bash
Entrez votre âge : 25
Vous êtes adulte.
```

---

## Exercice 2 : Vérification et Classification d’un Triangle  

### **Énoncé**  
Écrire un programme qui demande à l’utilisateur de saisir trois longueurs entières correspondant aux côtés d’un triangle.  
Le programme devra :  

### **1. Vérifier si les longueurs peuvent former un triangle**  
Un triangle est valide si chaque côté est **inférieur** à la somme des deux autres :  
- \( a + b > c \)  
- \( a + c > b \)  
- \( b + c > a \)  

Si ces conditions ne sont pas respectées, afficher :  
```bash
Ces longueurs ne forment pas un triangle.
```

### **2. Classer le Triangle**  
- **Équilatéral** → Si les trois côtés sont égaux.  
- **Isocèle** → Si deux côtés sont égaux.  
- **Scalène** → Si tous les côtés sont différents.  

### **3. Déterminer si le Triangle est Rectangle**  
- Identifier la plus grande longueur comme hypothénuse.  
- Vérifier si le **théorème de Pythagore** est respecté :  
  \[
  (hypoténuse)^2 = (autre côté)^2 + (autre côté)^2
  \]
- Si l’égalité est vérifiée, afficher que c'est un **triangle rectangle**.  

### **Instructions**  
1. Demander à l’utilisateur de saisir trois longueurs.  
2. Vérifier la validité du triangle.  
3. Classer le triangle en **équilatéral, isocèle ou scalène**.  
4. Vérifier si le triangle est **rectangle**.  

