//lister les bases de données
int listerBdD();

//accéder à une base 
int accederBdD(nom);

//telecharger une base 
int telecharger(nom);

//afficher une base 
int afficher(nom);

//supprimer une base 
int supprimerBdD(nom);

//supprimer une ligne
int supprimerLigne(numero);

//supprimer une colonne
int supprimerColonne(numero);

//chercher une base
int chercherBdD(nom);

//trier une base selon une colonne
int trierCroissant(colonne);

//trier une base selon une colonne
int trierDecroissant(colonne);

//afficher type d'une colonne
int typeColonne(Colonne);

//afficher max
int afficheMax(colonne);

//afficher max
int afficheMin(colonne);

//ajouter ligne
int ajoutLigne()

