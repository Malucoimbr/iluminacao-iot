# iluminacao-iot

# Projeto IoT com ESP32 – Monitoramento de Luminosidade

**Disciplina:** Sistemas Embarcados  
</br>
**Instituição:** CESAR School  
</br>
**Data de Entrega:** 04/12  
</br>
**Grupo:** </br> Maria Luísa Coimbra - mlcl@cesar.school </br> João Victor Ferraz - jvfg@cesar.school </br> Maria Julia Menezes - mjotm@cesar.school

---

## 📌 Descrição do Projeto

Este projeto implementa um sistema IoT utilizando ESP32 para realizar **monitoramento de luminosidade** através de um sensor LDR. Os dados serão integrados futuramente com um **broker MQTT** e um **dashboard web**.

Atualmente, o firmware lê o valor da luz ambiente e aciona um LED caso o nível esteja abaixo de um determinado limiar. O sistema será expandido para enviar esses dados ao Raspberry Pi via MQTT.

---

## 🎯 Objetivos

- Desenvolver um sistema IoT funcional com ESP32.
- Utilizar sensores e atuadores (LDR + LED).
- Enviar dados via MQTT para um Raspberry Pi.
- Criar um dashboard web exibindo dados em tempo real.

---

## 🛠️ Hardware Utilizado

- 1x ESP32 DevKit V1  
- 1x LDR  
- 1x Resistor para divisor de tensão (10kΩ sugerido)  
- 1x LED  
- Jumpers  

---

## 💻 Software / Ferramentas

- Arduino Framework (PlatformIO)
- Biblioteca MQTT (`PubSubClient`)
- Broker MQTT (Mosquitto) rodando em Raspberry Pi  
- Aplicação Web (tecnologia a definir)
- GitHub para versionamento

---

## 📡 Funcionamento Atual do Firmware

Atualmente, o ESP32:

1. Lê o valor analógico do LDR (0–4095)
2. Imprime o valor na serial (115200 baud)
3. Acende ou apaga o LED dependendo do nível de luz

