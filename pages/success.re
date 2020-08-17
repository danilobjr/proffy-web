open Button;
open Image;
open Text;

[@react.component]
let default = () => {
  <Page className="success">
    <PageContent>
      <div className="box">
        <Image name=Success />
        <Text type_=TitleBigger onPurpleBg=true>"Application complete!"</Text>
        <Text type_=Text onPurpleBg=true>"Now you are part of Proffy family"</Text>
      </div>
      <Button type_=Primary>"Go Back to Login"</Button>
    </PageContent>
  </Page>
};
