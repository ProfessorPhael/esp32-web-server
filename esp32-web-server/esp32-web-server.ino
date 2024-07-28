#include <WiFi.h>
#include <ESPAsyncWebServer.h>

// Defina o nome e a senha do Wi-Fi
const char* ssid = "SEU_SSID";
const char* password = "SUA_SENHA";

// Crie uma instância do servidor web assíncrono
AsyncWebServer server(80);

void setup() {
  // Inicialize a comunicação serial
  Serial.begin(115200);

  // Conecte-se ao Wi-Fi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Conectando ao WiFi...");
  }

  // Imprima o endereço IP na serial
  Serial.println("Conectado ao WiFi!");
  Serial.print("Endereço IP: ");
  Serial.println(WiFi.localIP());

  // Defina uma rota para o servidor web
  server.on("/", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send(200, "text/plain", "Olá, mundo!");
  });

  // Inicie o servidor
  server.begin();
}

void loop() {
  // Nada para fazer aqui
}
