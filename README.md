### Web Server com ESP32 - Exibindo "Hello World from ESP32"  
#### (Informações em Inglês e Português)

---

#### **📘 Descrição / Description:**

Neste projeto, você aprenderá a configurar um **servidor web no ESP32** que exibirá a mensagem "Hello World from ESP32" em um navegador web. Utilizaremos a linguagem **C++**, com as bibliotecas específicas do ESP32 para lidar com a conectividade Wi-Fi e a criação de um servidor web básico.

---

#### **📋 Requisitos / Requirements:**

- **ESP32** (Qualquer modelo compatível, como o ESP-WROOM-32)
- **Arduino IDE** (com suporte para placas ESP32 instalado)
- Conexão Wi-Fi
- Cabo USB para programação

---

#### **🔧 Linguagem Utilizada / Language Used:**

- **C++**: Usaremos **C++** no Arduino IDE para escrever o código que será executado no ESP32.
  
  - **Funções principais**:
    - **`setup()`**: Configura o ESP32 e a rede Wi-Fi.
    - **`loop()`**: Executa repetidamente o código, lidando com as requisições ao servidor.

---

#### **📚 Bibliotecas Utilizadas / Libraries Used:**

1. **WiFi.h**:
   - Responsável por conectar o ESP32 a uma rede Wi-Fi.
   - Configura o ESP32 como cliente ou ponto de acesso.

2. **WebServer.h**:
   - Facilita a criação de um servidor web local que responde às solicitações HTTP.
   - Permite a configuração de rotas (endereços) para que o servidor web exiba diferentes páginas.



---

#### **🔍 Explicação / Explanation:**

1. **Conexão Wi-Fi**:
   - O ESP32 se conecta à rede Wi-Fi especificada pelos valores **`ssid`** e **`password`**.
   - A função **`WiFi.begin()`** tenta se conectar à rede, e o código entra em um loop até que a conexão seja estabelecida.

2. **Servidor Web**:
   - Usamos a biblioteca **`WebServer`** para configurar um servidor HTTP simples na porta 80.
   - A função **`handleRoot()`** é chamada quando um cliente acessa a página principal (`/`) do servidor, exibindo a mensagem **"Hello World from ESP32"**.

3. **Monitor Serial**:
   - O **`Serial.begin(115200)`** inicializa a comunicação serial, e o IP do ESP32 é impresso no console para que possamos acessá-lo via navegador.

---

#### **⚙️ Passos para Configuração / Steps to Set Up:**

1. **Instalar a Biblioteca ESP32 no Arduino IDE**:
   - Abra o **Arduino IDE**.
   - Vá para **Arquivo > Preferências** e adicione a URL de placas ESP32:  
     `https://dl.espressif.com/dl/package_esp32_index.json`
   - Vá para **Ferramentas > Placas > Gerenciador de Placas** e procure por **ESP32**.
   - Instale a biblioteca do ESP32.

2. **Carregar o Código no ESP32**:
   - Conecte o ESP32 ao seu computador via USB.
   - Selecione a placa correta (**ESP32 Dev Module**) em **Ferramentas > Placa**.
   - Verifique a porta correta em **Ferramentas > Porta**.
   - Carregue o código no ESP32.

3. **Acessar a Página Web**:
   - Abra o **Monitor Serial** no Arduino IDE para ver o endereço IP do ESP32.
   - No navegador, digite o IP (exemplo: `http://192.168.1.100`).
   - Você verá a mensagem **"Hello World from ESP32"**.

---

#### **📈 Possíveis Melhorias / Possible Improvements:**

- Estilizar a página HTML usando **CSS**.
- Usar **AJAX** para atualizar dinamicamente as informações na página web sem recarregar.
- Adicionar funcionalidades, como botões ou sliders, para controle de dispositivos conectados ao ESP32 (ex: acender e apagar LEDs).

---

#### **🔗 Recursos Adicionais / Additional Resources:**

- [Documentação Oficial do ESP32](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/)
- [Arduino IDE ESP32 Setup Guide](https://randomnerdtutorials.com/installing-the-esp32-board-in-arduino-ide-windows-instructions/)

---

Espero que esse guia ajude a criar e entender um servidor web básico com o ESP32. Qualquer dúvida ou ajuste, estou à disposição!
