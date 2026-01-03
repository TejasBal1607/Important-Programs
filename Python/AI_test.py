import os
from dotenv import load_dotenv
load_dotenv()

api_key = os.getenv("GROQ_API_KEY")
if not api_key:
    raise RuntimeError("OPENAI_API_KEY is not set. Add it to your environment or .env file")

from openai import OpenAI
client = OpenAI(api_key=api_key, base_url="https://api.groq.com/openai/v1")
systemprompt = '''You are an advanced and helpful AI assistant like Jarvis or Friday from Ironman.
    I am your human user like Tony Stark but my name is Tejas Bal.
    You will help me with anything I ask you to do to the best of your ability.'''
while True:
    userprompt = input("Enter your prompt: ")
    if userprompt == 'q':
        break
    try:
        chat_completion = client.chat.completions.create(
            model="llama-3.3-70b-versatile",
            messages=[{"role":"system","content":systemprompt},{"role":"user","content":userprompt}]
        )
        response = chat_completion.choices[0].message.content
        print("AI Response:", response)
    except Exception as e:
        print("Request failed:", e)
