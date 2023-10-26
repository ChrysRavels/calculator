#include <iostream>

int main() {
    double num1, num2;
    char operation;

    // Demande à l'utilisateur de saisir les nombres et l'opération
    std::cout << "Entrez le premier nombre: ";
    std::cin >> num1;

    std::cout << "Entrez un opérateur (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "Entrez le deuxième nombre: ";
    std::cin >> num2;

    double result;

    // Effectue le calcul en fonction de l'opération saisie
    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                std::cout << "Division par zéro impossible." << std::endl;
                return 1; // Quitte le programme avec un code d'erreur
            }
            break;
        default:
            std::cout << "Opérateur non valide." << std::endl;
            return 1; // Quitte le programme avec un code d'erreur
    }

    // Affiche le résultat
    std::cout << "Résultat : " << result << std::endl;

    return 0;
}
