# Gerenciador-de-senhas-com-Arduino
Gerenciador de senhas básico utilizando o Arduino Pro Micro. 

# Componentes Utilizados
- Arduino Pro Mini SS.
- Foram utilizadas bibliotecas padrões do Arduino Pro Micro.
- Botão para inserir a senha conectado ao pino 1
![image](https://github.com/JLourencao/Gestor-de-senhas-Arduino/assets/113789779/905874c6-c5f1-45d8-ae93-ac08fb4d8de7)

# Como Funciona
Trata-se de um Gestor de senhas que funciona da seguinte maneira: Após o usuário plugar o Arduino em sua máquina e apertar o botão, será digitado metade de uma senha criptografada em Hash MD5
Por exemplo, minha senha é "Memória Ram"
Após o botão ser pressionado, será digitado isto "5d9f8d33cd1fa3d5a3628ca457ed0cdb" <- que significa "Memória ", para completar a senha basta digitar o restante: "Ram"

![image](https://github.com/JLourencao/Gestor-de-senhas-Arduino/assets/113789779/3c80e045-0596-4d9d-b16d-a1f6caeefee4)

