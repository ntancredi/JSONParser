# app.py
import ai_processor_module

def main():
    json_data = '{"name": "Gorland the Warrior", "attributes": {"STR": 20, "DEX": 8, "CON": 12}}'
    processed_data = ai_processor_module.AIProcessor.processCharacterData(json_data)
    print("Processed Data:\n", processed_data)

if __name__ == "__main__":
    main()