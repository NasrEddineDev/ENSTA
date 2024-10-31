::: mermaid
graph TD
    A[Start] --> B{Enter price}
    B --> C{Calculate VAT}
    C --> D{Check if price > 2000}
    D -- Yes --> E{Apply discount}
    D -- No --> F{Display price}
    E --> F
    F --> G[End]
:::
