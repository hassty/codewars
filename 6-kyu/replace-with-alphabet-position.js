function alphabetPosition(text) {
	result = []
	for(let i = 0; i<text.length;++i){
	let a = text.toLowerCase().charCodeAt(i);
	if(a>=97&&a<=122)
	result.push(a-96);
	}
	return result.join(' ')
}