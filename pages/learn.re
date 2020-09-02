open Box;
open Classnames;
open FormField;

[@react.component]
let default = () => {
  let router = Next.useRouter();
  let (sliderIndex, setSliderIndex) = React.useState(() => 0);
  let (filterOpen, toggleFilter) = Hooks.useToggle();

  let backToHomePage = (_) => router -> Next.Router.push(~url="/home", ());
  let handleTabClick = (index, _) => setSliderIndex(_ => index);

  <PageContainer className="learn-page">
    <AppBar title="Learn" onBackClick=backToHomePage />

    <Slider index=sliderIndex>
      <Slider.View>
        <Hero.Container padding=Spacing.Lg alignItems=AlignItems.Stretch>
          <Text type_=Text.Title purpleBg=true>"Available Tutors"</Text>

          <Flex
            className="filter-toggler"
            paddingBottom=Spacing.Sm
            alignItems=AlignItems.Center
            onClick=(_ => toggleFilter())
          >
            <Icon name=Icon.Filter />
            <Text className="text" purpleBg=true>"Filters"</Text>
            <Icon className=append(["-up" -> on(filterOpen)]) name=Icon.CaretDown />
          </Flex>

          <div className=append(["filter-form", "-open" -> on(filterOpen)])>
            <InputText
              label="Subject"
              name="subject"
            />

            <Flex>
              <InputText
                label="Weekday"
                name="weekday"
              />

              <InputText
                className="_margin-left-1"
                label="Opening hours"
                name="time"
              />
            </Flex>
          </div>
        </Hero.Container>

        <Box className="content" padding=Spacing.Sm>
          <Box className="card-container">
            <Box className="card -has-footer" padding=Spacing.Md>
              <Flex className="header">
                <img className="userimage" src="https://github.com/danilobjr.png" alt="user image"/>

                <Flex className="userinfo" direction=FlexDirection.Column>
                  <Text type_=Title>"Danilo Barros"</Text>
                  <Text>"Math"</Text>
                </Flex>
              </Flex>

              <Text>"Lorem ipsum dolor sit amet consectetur, adipisicing elit. Placeat quisquam reprehenderit laboriosam provident id eligendi voluptatibus facere qui dicta, illum, laudantium voluptatum deleniti assumenda nulla ipsa doloribus. Architecto, molestias veritatis."</Text>
              <Text>"Lorem ipsum dolor sit amet consectetur, adipisicing elit. Placeat quisquam reprehenderit laboriosam provident id eligendi voluptatibus facere qui dicta, illum, laudantium voluptatum deleniti assumenda nulla ipsa doloribus. Architecto, molestias veritatis."</Text>

              <hr className="separator" />

              <Box className="schedule">
                <Flex justifyContent=JustifyContent.SpaceBetween>
                  <Text>"Week day"</Text>
                  <Text>"Opening hours"</Text>
                </Flex>

                <div className="day">
                  <Text className="dayname">"Monday"</Text>
                  <Image name=Image.LongArrowRight />
                  <Text className="time">"8h - 18h"</Text>
                </div>

                <div className="day -unavailable">
                  <Text className="dayname">"Tuesday"</Text>
                  <Image name=Image.LongArrowRight />
                  <Text className="time">"-"</Text>
                </div>

                <div className="day">
                  <Text className="dayname">"Wednesday"</Text>
                  <Image name=Image.LongArrowRight />
                  <Text className="time">"8h - 18h"</Text>
                </div>

                <div className="day -unavailable">
                  <Text className="dayname">"Thursday"</Text>
                  <Image name=Image.LongArrowRight />
                  <Text className="time">"-"</Text>
                </div>

                <div className="day">
                  <Text className="dayname">"Friday"</Text>
                  <Image name=Image.LongArrowRight />
                  <Text className="time">"8h - 18h"</Text>
                </div>
              </Box>
            </Box>

            <Box className="footer" padding=Spacing.Md>
              <Flex className="cost" justifyContent=JustifyContent.SpaceBetween>
                <Text>"Cost per lesson (1h)"</Text>
                <Text>"$20"</Text>
              </Flex>

              <Flex className="buttons">
                <Button className="favorite" icon=Icon.HeartOutline />
                <Button className="contact" type_=Button.Primary icon=Icon.Whatsapp>
                  "Contact"
                </Button>
              </Flex>
            </Box>
          </Box>
        </Box>
      </Slider.View>

      <Slider.View>
        <Hero.Container padding=Spacing.Lg alignItems=AlignItems.Stretch>
          <Text type_=Text.Title purpleBg=true>"Favorite Tutors"</Text>
        </Hero.Container>

        <Box className="content" padding=Spacing.Sm>
          <Box className="card-container">
            <Box className="card -has-footer" padding=Spacing.Md>
              <Flex className="header">
                <img className="userimage" src="https://github.com/danilobjr.png" alt="user image"/>

                <Flex className="userinfo" direction=FlexDirection.Column>
                  <Text type_=Title>"Danilo Barros"</Text>
                  <Text>"Math"</Text>
                </Flex>
              </Flex>

              <Text>"Lorem ipsum dolor sit amet consectetur, adipisicing elit. Placeat quisquam reprehenderit laboriosam provident id eligendi voluptatibus facere qui dicta, illum, laudantium voluptatum deleniti assumenda nulla ipsa doloribus. Architecto, molestias veritatis."</Text>
              <Text>"Lorem ipsum dolor sit amet consectetur, adipisicing elit. Placeat quisquam reprehenderit laboriosam provident id eligendi voluptatibus facere qui dicta, illum, laudantium voluptatum deleniti assumenda nulla ipsa doloribus. Architecto, molestias veritatis."</Text>

              <hr className="separator" />

              <Box className="schedule">
                <Flex justifyContent=JustifyContent.SpaceBetween>
                  <Text>"Week day"</Text>
                  <Text>"Opening hours"</Text>
                </Flex>

                <div className="day">
                  <Text className="dayname">"Monday"</Text>
                  <Image name=Image.LongArrowRight />
                  <Text className="time">"8h - 18h"</Text>
                </div>

                <div className="day -unavailable">
                  <Text className="dayname">"Tuesday"</Text>
                  <Image name=Image.LongArrowRight />
                  <Text className="time">"-"</Text>
                </div>

                <div className="day">
                  <Text className="dayname">"Wednesday"</Text>
                  <Image name=Image.LongArrowRight />
                  <Text className="time">"8h - 18h"</Text>
                </div>

                <div className="day -unavailable">
                  <Text className="dayname">"Thursday"</Text>
                  <Image name=Image.LongArrowRight />
                  <Text className="time">"-"</Text>
                </div>

                <div className="day">
                  <Text className="dayname">"Friday"</Text>
                  <Image name=Image.LongArrowRight />
                  <Text className="time">"8h - 18h"</Text>
                </div>
              </Box>
            </Box>

            <Box className="footer" padding=Spacing.Md>
              <Flex className="cost" justifyContent=JustifyContent.SpaceBetween>
                <Text>"Cost per lesson (1h)"</Text>
                <Text>"$20"</Text>
              </Flex>

              <Flex className="buttons">
                <Button className="favorite" icon=Icon.HeartOutline />
                <Button className="contact" type_=Button.Primary icon=Icon.Whatsapp>
                  "Contact"
                </Button>
              </Flex>
            </Box>
          </Box>
        </Box>
      </Slider.View>
    </Slider>

    <Tabs>
      <Tabs.Tab focused=(sliderIndex === 0) onClick=handleTabClick(0)>
        <Icon name=Icon.Easel />
        <Text type_=Text.Title>"Proffys"</Text>
      </Tabs.Tab>

      <Tabs.Tab focused=(sliderIndex === 1) onClick=handleTabClick(1)>
        <Icon name=Icon.HeartOutline />
        <Text type_=Text.Title>"Favorites"</Text>
      </Tabs.Tab>
    </Tabs>
  </PageContainer>
};
