#include <iostream>

using namespace std;

int main()
{
    float qtd_sm, qtd_filhos, salario_base, salario_bruto, salario_liquido, imposto_renda, inss, total_desconto;

    cout << "Informe a quantidade de salarios minimos: ";
    cin >> qtd_sm;
    cout << "Informe o total de filhos: ";
    cin >> qtd_filhos;

    salario_base = qtd_sm * 1320.00 + qtd_filhos * 58.0;
    imposto_renda = salario_base * 7.5 / 100.0;
    inss = salario_base * 6 / 100.0;
    total_desconto = imposto_renda + inss;
    salario_bruto = salario_base + 350.0;
    salario_liquido = salario_bruto - total_desconto;

    cout << "Salario Bruto: R$" << salario_bruto << endl;
    cout << "Imposto de Renda: R$" << imposto_renda << endl;
    cout << "Previdencia: R$" << inss << endl;
    cout << "Desconto: R$" << total_desconto << endl;
    cout << "Salario Liquido: R$" << salario_liquido << endl;

    return 0;
}
