
import pygame

pygame.init()

# Create game window
window_width = 600
window_height = 400
window = pygame.display.set_mode((window_width, window_height))
pygame.display.set_caption('Game')

# Create paddles
paddle_width = 20
paddle_height = 100
left_paddle = pygame.Rect(0, window_height/2 - paddle_height/2, paddle_width, paddle_height)
right_paddle = pygame.Rect(window_width - paddle_width, window_height/2 - paddle_height/2, paddle_width, paddle_height)

# Main game loop
running = True
while running:
    # Handle events
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False

    # Draw paddles
    pygame.draw.rect(window, (255, 0, 0), left_paddle)
    pygame.draw.rect(window, (255, 0, 0), right_paddle)

    # Update the display
    pygame.display.update()

# Quit the game
pygame.quit()
