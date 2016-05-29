//Prototypes Client

//connection au serveur avec son IP
//Ne doit pas déjà être connecté avec son id
// 
int connection(IP, port);


//s'indentifier au serveur 
int identifier(char username, char code);

//Créer un compte
int creercompte(username, code);


//deconnection du serveur courant
int deconnexion();

