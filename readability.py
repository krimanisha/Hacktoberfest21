
from cs50 import get_string


def main():

    text = get_string("Text: ")

    no_of_letters = compute_letters(text)
    no_of_words = compute_word(text)
    no_of_sentences = compute_sentences(text)

    L = (no_of_letters * 100) / no_of_words

    S = (no_of_sentences * 100) / no_of_words

    index = int((L * 0.0588 - S * 0.296 - 15.8) + 0.5)

    if index > 16:
        print("Grade 16+")
    elif index < 1:
        print("Before Grade 1")
    else:
        print(f"Grade {index}")


def compute_letters(text):
    count_letters = 0

    for i in text:
        if i.isalpha():
            count_letters += 1
    return count_letters


def compute_word(text):
    count_words = len(text.split())
    return count_words


def compute_sentences(text):
    count_sentences = 0

    for char in text:
        if char in ['?', '.', '!']:
            count_sentences += 1
    return count_sentences


main()