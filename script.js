// Script para controle da página CSScript

document.addEventListener('DOMContentLoaded', () => {
    const codeBlock = document.querySelector('pre code');

    // Função para destacar a palavra "using" dentro do código
    function highlightKeywords() {
        if (!codeBlock) return;
        let html = codeBlock.innerHTML;

        // Substitui todos os "using" pela versão com span de destaque
        html = html.replace(/\busing\b/g, '<span class="keyword">using</span>');

        codeBlock.innerHTML = html;
    }

    highlightKeywords();
});
