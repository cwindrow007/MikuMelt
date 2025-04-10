# Miku Melt `[INFDEV]` | (**初音ミク プロジェクトDIVA 抽出ツール**)
---
**Miku Melt** is a custom C++ tool designed to extract and convert asset file from **Hatsune Miku: Project DIVA** games into formats readable by tools like **Blender**. It will support parsing and converting `.gmo`, `.farc`, and other proprietary file types.

Whether you're modding, analyzing, or interested in getting into modding with Miku Content, **Miku Melt** helps make 
extraction easy for users.

> モッディングに興味がある方や、ミクのコンテンツを研究したい方のために、**Miku Melt** は抽出作業を簡単にします。

![modelmiku](https://github.com/user-attachments/assets/cba432af-94ad-458d-b621-4b50da25e560)
`Hatsune Miku online model exported to blender` 

---
## Features

-  Extract `.farc` archives  
-  Convert `.gmo` model files into Blender-compatible formats (e.g., `.obj`, `.fbx`)  
-  WIP support for animation and texture mapping  
-  Batch extraction with minimal setup  
-  Clean C++20 backend, optimized for speed and readability
---

 ## File Types Supported

| Format       | Description                     | Status        |
|--------------|---------------------------------|---------------|
| `.farc`      | Archive format used in Project DIVA games | InDev |
| `.gmo`       | 3D model format for characters/items        |InDev |
| `.ftex`, `.gim` | Texture formats                | Planned |
| `.mot`, `.bin` | Animation/motion data         |  Planned     |

---
---

## Requirements

- C++20 compatible compiler (GCC 10+, Clang, MSVC)
- [CMake](https://cmake.org/) 3.16 or higher
- Optionally: [Blender](https://www.blender.org/) for importing exported models

---
## FAQ / よくある質問

**Q: Can I use this to mod Project DIVA games?**  
**A:** This tool is for educational and creative purposes. Modding games may violate terms of service depending on your platform.

**Q: このツールを使って Project DIVA を改造してもいいですか？**  
**A:** 本ツールは教育的・創造的目的のために提供されています。ゲームの改造は、ご利用のプラットフォームによっては利用規約に違反する可能性があります。

**Q: Where do I get Project DIVA assets?**  
**A:** You must legally obtain assets from your **own** game copies. This tool does not include or distribute any copyrighted files.

**Q: Project DIVA のアセットはどこで入手できますか？**  
**A:** アセットはご自身が所有するゲームから**正当に取得**してください。本ツールには著作物やゲームファイルは一切含まれておらず、配布も行っていません。

---
## Disclaimer

You may use **Miku Melt** at your own discretion for educational, personal, or creative purposes. However, the use of this tool to create, distribute, or engage with **NSFW (Not Safe For Work)** content, especially involving characters from *Hatsune Miku: Project DIVA*, is **strictly prohibited**.

Respect the original creators and the Vocaloid community. This tool was built with appreciation and love for the art—not for exploitation.

By using this tool, you agree to uphold these guidelines.

## 免責事項（Disclaimer）

**Miku Melt** は教育的、個人的、または創造的な目的で自由に使用できますが、  
このツールを使用して *初音ミク Project DIVA* のキャラクターに関連する **NSFW（年齢制限のある）コンテンツ** を作成・配布・関与することは、**固く禁止**されています。

このツールはアートとクリエイターへの敬意を込めて作られたものであり、  
その意図を逸脱する使用はご遠慮ください。

このツールを使用することで、上記のガイドラインに同意したものと見なされます



